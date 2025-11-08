#pragma once
#include "ArcherWeapon.h"
class Legolas_Bow : public ArcherWeapon {//classe de l'arme Legolas Bow héritant de ArcherWeapon
public:
	//Constructeur de la classe Legolas_Bow
	Legolas_Bow();
	//Méthode pour obtenir les dégâts de l'arme Legolas Bow
	float ArrowDamage() override;
};

