#pragma once
class Die
{
public:
	Die();
	void display();
	void resetDisplay();
	void printAscii(int asciiVal);
	void roll();
};

enum DieAscii
{
	ONE, TWO, THREE, FOUR, FIVE, SIX, TOTAL
};