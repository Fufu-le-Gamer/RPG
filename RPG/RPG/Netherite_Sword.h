#pragma once
#include "WarriorWeapon.h"

class Netherite_Sword : public WarriorWeapon {//classe de l'arme Netherite Sword héritant de WarriorWeapon
public:
	//Constructeur de la classe Netherite_Sword
	Netherite_Sword();
	//Méthode pour obtenir les dégâts physiques de l'arme Netherite Sword
	float PhysicDamage() override;
};

