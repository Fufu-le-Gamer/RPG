#pragma once
#include "Weapon.h"
#include "Assassin.h"

class AssassinWeapon : public SmasherWeapon {//classe des armes des Assassin héritant de Weapon
protected:
	//Nom de l'arme de l'Assassin
	std::string WeaponName;

public:
	//Constructeur de la classe AssassinWeapon
	AssassinWeapon();
	//Destructeur virtuel par défaut de la classe AssassinWeapon
	virtual ~AssassinWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts de l'arme de l'Assassin
	virtual float PhysicDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme de l'Assassin
	virtual void DisplayAssassinWeapon();
};

