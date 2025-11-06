#pragma once
#include <iostream>
#include <string>

class Smasher
{
protected:
	std::string SmasherName;

public:
	Smasher();

	virtual ~Smasher();

	virtual float PV() = 0;

	virtual float MeleeBuff() = 0;

	virtual float MagicBuff() = 0;

	virtual float DefenceBuff() = 0;

	virtual void DisplayStats();
};

