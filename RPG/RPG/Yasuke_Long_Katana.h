#pragma once
#include "AssassinWeapon.h"

class Yasuke_Long_Katana : public AssassinWeapon{
public:
	Yasuke_Long_Katana();

	~Yasuke_Long_Katana();

	virtual float PhysicDamage() override;
};

