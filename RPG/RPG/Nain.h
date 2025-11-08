#pragma once
#include "Smasher.h"

class Nain : public Smasher {//classe Nain héritant de Smasher
public:
	//Attributs spécifiques à la classe Nain
	int Size;
	int Weight;
	//Constructeurs de la classe Nain
	Nain();
	//Constructeur paramétré de la classe Nain
	Nain(int _size, int _weight);
	//Destructeur virtuel de la classe Nain
	virtual ~Nain() override;
	//Méthode pour obtenir les points de vie du Nain
	virtual float PV() override;
	//Méthode pour obtenir le buff physique du Nain
	virtual float PhysicalBuff() override;
	//Méthode pour obtenir le buff magique du Nain
	virtual float MagicBuff() override;
	//Méthode pour obtenir le buff de défense du Nain
	virtual float DefenceBuff() override;
};

