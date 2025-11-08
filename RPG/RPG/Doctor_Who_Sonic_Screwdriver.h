#pragma once
#include "IngenieurWeapon.h"

class Doctor_Who_Sonic_Screwdriver : public IngenieurWeapon {//classe de l'arme Doctor Who Sonic Screwdriver héritant de IngenieurWeapon
public:
	//Constructeur de la classe Doctor_Who_Sonic_Screwdriver
	Doctor_Who_Sonic_Screwdriver();
	//Méthode pour obtenir les dégâts technologiques de l'arme Doctor Who Sonic Screwdriver
	float TechnoDamage() override;
};

