#pragma once
#include "Weapon.h"
#include "Warrior.h"

class WarriorWeapon : public SmasherWeapon {//classe des armes des Warrior héritant de Weapon
protected:
	//Nom de l'arme du Warrior
	std::string WeaponName;

public:
	//Constructeur de la classe WarriorWeapon
	WarriorWeapon();
	//Destructeur virtuel par défaut de la classe WarriorWeapon
	virtual ~WarriorWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts physiques de l'arme du Warrior
	virtual float PhysicDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme du Warrior
	virtual void DisplayWarriorWeapon();
};

