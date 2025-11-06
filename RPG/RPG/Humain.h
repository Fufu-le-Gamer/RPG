#pragma once
#include "Smasher.h"

class Humain : public Smasher{
public:
	int Size;
	int Weight;

	Humain();

	Humain(int _size, int _weight);

	virtual ~Humain() override;

	virtual float PV() override;
	
	virtual float MeleeBuff() override;

	virtual float MagicBuff() override;

	virtual float DefenceBuff() override;

	

};

