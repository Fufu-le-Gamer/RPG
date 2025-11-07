#pragma once
#include "MageWeapon.h"

class Elder_Wand : public MageWeapon{
public:
	Elder_Wand();

	~Elder_Wand();

	virtual float MagicDamage() override;
};

