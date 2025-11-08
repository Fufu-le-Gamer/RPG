#pragma once
#include "ArcherWeapon.h"

class Hawkeye_Bow : public ArcherWeapon {//classe de l'arme Hawkeye Bow héritant de ArcherWeapon
public:
	//Constructeur de la classe Hawkeye_Bow
	Hawkeye_Bow();
	//Méthode pour obtenir les dégâts de l'arme Hawkeye Bow
	float ArrowDamage() override;
};

