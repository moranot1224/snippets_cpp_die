#pragma once
class Die
{
public:
	Die();
	void resetDisplay();
	void printAscii(int asciiVal);
	void display();
	void roll();
};

enum DieAscii
{
	ONE, TWO, THREE, FOUR, FIVE, SIX, TOTAL
};