#pragma once
#include "IngenieurWeapon.h"
class Iron_Man_Repulsor_Gauntlet : public IngenieurWeapon{
public:
	Iron_Man_Repulsor_Gauntlet();

	~Iron_Man_Repulsor_Gauntlet();

	virtual float TechnoDamage() override;
};

