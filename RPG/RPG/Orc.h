#pragma once
#include "Smasher.h"

class Orc : public Smasher {//classe Orc héritant de Smasher
public:
	//Attributs de la classe Orc
	int Size;
	int Weight;
	//Constructeurs de la classe Orc
	Orc();
	//Constructeur par défaut de la classe
	Orc(int _size, int _weight);
	//Destructeur virtuel de la classe Orc
	virtual ~Orc() override;
	//Méthodes virtuelles redéfinies de la classe Orc
	virtual float PV() override;
	//Méthode pour le buff physique
	virtual float PhysicalBuff() override;
	//Méthode pour le buff magique
	virtual float MagicBuff() override;
	//Méthode pour le buff de défense
	virtual float DefenceBuff() override;
};

