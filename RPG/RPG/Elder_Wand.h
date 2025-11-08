#pragma once
#include "MageWeapon.h"

class Elder_Wand : public MageWeapon {//classe de l'arme Elder_Wand héritant de MageWeapon
public:
	//Constructeur de la classe Elder_Wand
	Elder_Wand();
	//Méthode pour obtenir les dégâts magiques de l'arme Elder_Wand
	float MagicDamage() override;
};

