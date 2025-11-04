#pragma once
class Smasher
{
public:
	Smasher();

	virtual ~Smasher();

	virtual float MeleeBuff() = 0;

	virtual float MagicBuff() = 0;

	virtual float ResistanceBuff() = 0;
};

