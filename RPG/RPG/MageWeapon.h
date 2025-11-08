#pragma once
#include "Weapon.h"
#include "Mage.h"

class MageWeapon : public SmasherWeapon {//classe des armes des Mage héritant de Weapon
protected:
	//Nom de l'arme du Mage
	std::string WeaponName;

public:
	//Constructeur de la classe MageWeapon
	MageWeapon();
	//Destructeur virtuel par défaut de la classe MageWeapon
	virtual ~MageWeapon() = default;
	//Méthode virtuelle pure pour obtenir les dégâts magiques de l'arme du Mage
	virtual float MagicDamage() = 0;
	//Méthode virtuelle pour afficher les informations de l'arme du Mage
	virtual void DisplayMageWeapon();

};

