#pragma once
#include "Smasher.h"

class Humain : public Smasher {//classe Humain héritant de Smasher
public:
	//Attributs spécifiques à la classe Humain
	int Size;
	int Weight;
	//Constructeur par défaut de la classe Humain
	Humain();
	//Constructeur paramétré de la classe Humain
	Humain(int _size, int _weight);
	//Destructeur virtuel de la classe Humain
	virtual ~Humain() override;
	//Méthode pour obtenir les points de vie du Humain
	virtual float PV() override;
	//Méthode pour obtenir le buff physique du Humain
	virtual float PhysicalBuff() override;
	//Méthode pour obtenir le buff magique du Humain
	virtual float MagicBuff() override;
	//Méthode pour obtenir le buff de défense du Humain
	virtual float DefenceBuff() override;

	

};

