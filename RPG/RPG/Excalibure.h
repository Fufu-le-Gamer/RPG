#pragma once
#include "WarriorWeapon.h"

class Excalibure : public WarriorWeapon {//classe de l'arme Excalibure héritant de WarriorWeapon
public:
	//Constructeur de la classe Excalibure
	Excalibure();
	//Méthode pour obtenir les dégâts physiques de l'arme Excalibure
	float PhysicDamage() override;
};

