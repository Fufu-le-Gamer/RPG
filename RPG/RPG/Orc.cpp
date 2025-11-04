#include "Orc.h"

Orc::Orc()
{
	Size = 220;
	Weight = 210;
}

Orc::Orc(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
}

Orc::~Orc()
{

}

float Orc::MeleeBuff()
{
	return 2;
}

float Orc::MagicBuff()
{
	return 0.5f;
}

float Orc::ResistanceBuff()
{
	return 2;
}
