#pragma once
#include "Weapon.h"
#include "Voleur.h"

class VoleurWeapon : public SmasherWeapon {//classe des armes des Voleur héritant de Weapon
protected:
	//Nom de l'arme de l'Assassin
	std::string WeaponName;

public:
	//Constructeur de la classe VoleurWeapon
	VoleurWeapon();
	//Destructeur virtuel par défaut de la classe VoleurWeapon
	virtual ~VoleurWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts de l'arme de l'Assassin
	virtual float PhysicDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme de l'Assassin
	virtual void DisplayVoleurWeapon();
};

