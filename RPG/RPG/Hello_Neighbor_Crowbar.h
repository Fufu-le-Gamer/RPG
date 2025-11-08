#pragma once
#include "VoleurWeapon.h"

class Hello_Neighbor_Crowbar : public VoleurWeapon {//classe de l'arme Hello Neighbor Crowbar héritant de VoleurWeapon
public:
	//Constructeur de la classe Hello_Neighbor_Crowbar
	Hello_Neighbor_Crowbar();
	//Méthode pour obtenir les dégâts physiques de l'arme Hello Neighbor Crowbar
	float PhysicDamage() override;
};

