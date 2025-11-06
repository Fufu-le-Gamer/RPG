#include "Orc.h"

Orc::Orc()
{
	SmasherName = "Orc";
	Size = 220;
	Weight = 210;
}

Orc::Orc(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
	SmasherName = "Orc";
}

Orc::~Orc()
{

}

float Orc::PV()
{
	return 200;
}

float Orc::MeleeBuff()
{
	return 2;
}

float Orc::MagicBuff()
{
	return 0.5f;
}

float Orc::DefenceBuff()
{
	return 2;
}
