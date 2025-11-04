#pragma once
#include "Smasher.h"

class Elf : public Smasher{
public:
	int Size;
	int Weight;

	Elf();

	Elf(int _size, int _weight);

	virtual ~Elf();

	virtual float MeleeBuff() override;

	virtual float MagicBuff() override;

	virtual float ResistanceBuff() override;
};

