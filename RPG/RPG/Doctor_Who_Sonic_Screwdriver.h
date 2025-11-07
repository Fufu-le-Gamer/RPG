#pragma once
#include "IngenieurWeapon.h"
class Doctor_Who_Sonic_Screwdriver : public IngenieurWeapon{
public:
	Doctor_Who_Sonic_Screwdriver();

	~Doctor_Who_Sonic_Screwdriver();

	virtual float TechnoDamage() override;
};

