#include "Nain.h"

Nain::Nain()
{
	SmasherName = "Nain";
	Size = 90;
	Weight = 24;
}

Nain::Nain(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
	SmasherName = "Nain";
}

Nain::~Nain()
{

}

float Nain::PV()
{
	return 50;
}

float Nain::MeleeBuff()
{
	return 0.5f;
}

float Nain::MagicBuff()
{
	return 1;
}

float Nain::DefenceBuff()
{
	return 0.5f;
}

