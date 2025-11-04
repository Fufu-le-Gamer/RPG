#pragma once
#include "Smasher.h"

class Orc : public Smasher{
public:
	int Size;
	int Weight;

	Orc();

	Orc(int _size, int _weight);

	virtual ~Orc() override;

	virtual float MeleeBuff() override;

	virtual float MagicBuff() override;

	virtual float ResistanceBuff() override;
};

