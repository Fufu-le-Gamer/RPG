#include "Nain.h"

Nain::Nain()
{
	Size = 90;
	Weight = 24;
}

Nain::Nain(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
}

Nain::~Nain()
{

}

float Nain::MeleeBuff()
{
	return 0.5f;
}

float Nain::MagicBuff()
{
	return 1;
}

float Nain::ResistanceBuff()
{
	return 0.5f;
}

