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
	SmasherName = "Humain";
}

Humain::~Humain()
{

}

float Humain::PV()
{
	return 100;
}

float Humain::MeleeBuff()
{
	return 1.5f;
}

float Humain::MagicBuff()
{
	return 1;
}

float Humain::DefenceBuff()
{
	return 1;
}


