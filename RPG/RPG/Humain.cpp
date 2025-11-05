#include "Humain.h"

Humain::Humain() 
{
	SmasherName = "Humain";
	Size = 180;
	Weight = 75;
}

Humain::Humain(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
}

Humain::~Humain()
{

}

float Humain::MeleeBuff()
{
	return 1.5f;
}

float Humain::MagicBuff()
{
	return 1;
}

float Humain::ResistanceBuff()
{
	return 1;
}


