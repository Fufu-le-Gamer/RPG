#pragma once
#include "VoleurWeapon.h"

class Hollow_Knight_Dagger : public VoleurWeapon {//classe de l'arme Hollow Knight Dagger héritant de VoleurWeapon
public:
	//Constructeur de la classe Hollow_Knight_Dagger
	Hollow_Knight_Dagger();
	//Méthode pour obtenir les dégâts physiques de l'arme Hollow Knight Dagger
	float PhysicDamage() override;
};

