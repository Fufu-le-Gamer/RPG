#pragma once
#include "ArcherWeapon.h"
class Legolas_Bow : public ArcherWeapon{
public:
	Legolas_Bow();

	~Legolas_Bow();

	virtual float ArrowDamage() override;
};

