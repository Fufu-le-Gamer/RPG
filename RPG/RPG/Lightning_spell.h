#pragma once
#include "Weapon.h"

class Lightning_spell : public SmasherWeapon{
public:	
	Lightning_spell();

	~Lightning_spell();

	virtual float MagicDamage() override;
};

