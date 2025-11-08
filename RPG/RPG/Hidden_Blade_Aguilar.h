#pragma once
#include "AssassinWeapon.h"

class Hidden_Blade_Aguilar : public AssassinWeapon {//classe de l'arme Hidden Blade Aguilar héritant de AssassinWeapon
public:
	//Constructeur de la classe Hidden_Blade_Aguilar
	Hidden_Blade_Aguilar();
	//Méthode pour obtenir les dégâts physiques de l'arme Hidden Blade Aguilar
	float PhysicDamage() override;
};

