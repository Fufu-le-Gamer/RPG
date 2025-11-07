#pragma once
#include <iostream>
#include <string>

class SmasherWeapon
{
protected:
	std::string TypeName;

public:
	SmasherWeapon();

	virtual ~SmasherWeapon() = default;

	virtual void DisplayType();
};

