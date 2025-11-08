#pragma once
#include "AssassinWeapon.h"

class Yasuke_Long_Katana : public AssassinWeapon {//classe de l'arme Yasuke Long Katana héritant de AssassinWeapon
public:
	//Constructeur de la classe Yasuke_Long_Katana
	Yasuke_Long_Katana();
	//Méthode pour obtenir les dégâts physiques de l'arme Yasuke Long Katana
	float PhysicDamage() override;
};

