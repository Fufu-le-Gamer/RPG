#pragma once
#include "ArcherWeapon.h"

class Hawkeye_Bow : public ArcherWeapon{
public:
	Hawkeye_Bow();

	~Hawkeye_Bow();

	virtual float ArrowDamage() override;
};

