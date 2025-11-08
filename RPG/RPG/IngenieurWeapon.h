#pragma once
#include "Weapon.h"
#include "Ingenieur.h"

class IngenieurWeapon : public SmasherWeapon {//classe des armes des Ingenieur héritant de Weapon
protected:
	//Nom de l'arme de l'Ingenieur
	std::string WeaponName;

public:
	//Constructeur de la classe IngenieurWeapon
	IngenieurWeapon();
	//Destructeur virtuel par défaut de la classe IngenieurWeapon
	virtual ~IngenieurWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts de l'arme de l'Ingenieur
	virtual float TechnoDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme de l'Ingenieur
	virtual void DisplayIngenieurWeapon();
};

