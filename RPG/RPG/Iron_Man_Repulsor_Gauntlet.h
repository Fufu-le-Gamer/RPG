#pragma once
#include "IngenieurWeapon.h"

class Iron_Man_Repulsor_Gauntlet : public IngenieurWeapon {//classe de l'arme Iron Man Repuls or Gauntlet héritant de IngenieurWeapon
public:
	//Constructeur de la classe Iron_Man_Repulsor_Gauntlet
	Iron_Man_Repulsor_Gauntlet();
	//Méthode pour obtenir les dégâts de l'arme Iron Man Repulsor Gauntlet
	float TechnoDamage() override;
};

