#pragma once
#include "MageWeapon.h"

class Lightning_spell : public MageWeapon {//classe du sort Lightning héritant de MageWeapon
public:
	//Constructeur de la classe Lightning_spell
	Lightning_spell();
	//Méthode pour obtenir les dégâts magiques du sort Lightning
	float MagicDamage() override;
};

