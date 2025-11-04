#include "Elf.h"

Elf::Elf()
{
	Size = 106;
	Weight = 50;
}

Elf::Elf(int _size, int _weight)
{
	Size = _size;
	Weight = _weight;
}

Elf::~Elf()
{

}

float Elf::MeleeBuff()
{
	return 1;
}

float Elf::MagicBuff()
{
	return 2;
}

float Elf::ResistanceBuff()
{
	return 1;
}



