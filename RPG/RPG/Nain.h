#pragma once
#include "Smasher.h"

class Nain : public Smasher{
public:
	int Size;
	int Weight;

	Nain();

	Nain(int _size, int _weight);

	virtual ~Nain() override;

	virtual float MeleeBuff() override;

	virtual float MagicBuff() override;

	virtual float ResistanceBuff() override;
};

