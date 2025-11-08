#pragma once
#include "Weapon.h"
#include "Archer.h"

class ArcherWeapon : public SmasherWeapon {//classe des armes des Archer héritant de Weapon
protected:
	//Nom de l'arme de l'Archer 
	std::string WeaponName;

public:
	//Constructeur de la classe ArcherWeapon
	ArcherWeapon();
	//Destructeur virtuel par défaut de la classe ArcherWeapon
	virtual ~ArcherWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts de l'arme de l'Archer
	virtual float ArrowDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme de l'Archer
	virtual void DisplayArcherWeapon();
};

