#include "Die.h"
#include <random>
#include <iostream>
#include <string.h>
#include <math.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

Die::Die()
{
	srand(time(NULL));
}

void Die::resetDisplay()
{
	std::cout << "\033[1A\033[1A\033[1A\033[1A\033[1A";
}

void Die::printAscii(int val)
{
	std::string topBotAscii = "+-------+\n";
	std::string ascii = topBotAscii;
	std::string faceAscii;
	switch (val - 1)
	{
	case DieAscii::ONE:
		faceAscii = "|       |\n|   O   |\n|       |\n";
		break;
	case DieAscii::TWO:
		faceAscii = "|       |\n| O   O |\n|       |\n";
		break;
	case DieAscii::THREE:
		faceAscii = "|   O   |\n|       |\n| O   O |\n";
		break;
	case DieAscii::FOUR:
		faceAscii = "| O   O |\n|       |\n| O   O |\n";
		break;
	case DieAscii::FIVE:
		faceAscii = "| O   O |\n|   O   |\n| O   O |\n";
		break;
	case DieAscii::SIX:
		faceAscii = "| O   O |\n| O   O |\n| O   O |\n";
		break;
	default:
		faceAscii = "";
		break;
	}
	std::cout << ascii << faceAscii << topBotAscii;
}

void Die::display()
{
	for (int count = 0; count < 100; count++)
	{
		printAscii(rand() % 5 + 1);
		resetDisplay();
		Sleep(pow(count / 7, 2));
	}
}

void Die::roll()
{
	int roll = rand() % 6 + 1;
	printAscii(roll);
	std::cout << "You rolled a " << roll;
}