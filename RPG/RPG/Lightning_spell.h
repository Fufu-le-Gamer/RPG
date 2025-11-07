#pragma once
#include "MageWeapon.h"

class Lightning_spell : public MageWeapon{
public:	
	Lightning_spell();

	~Lightning_spell();

	virtual float MagicDamage() override;
};

