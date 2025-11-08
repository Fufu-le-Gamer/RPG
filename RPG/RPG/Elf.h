#pragma once
#include "Smasher.h"

class Elf : public Smasher {//classe Elf héritant de Smasher
public:
	//Attributs de la classe Elf
	int Size;
	int Weight;
	//Constructeurs de la classe Elf 
	Elf();
	//Constructeur paramétré de la classe Elf
	Elf(int _size, int _weight);
	//Destructeur virtuel de la classe Elf
	virtual ~Elf();
	//Méthode pour obtenir les points de vie de l'Elf
	virtual float PV() override;
	//Méthode pour obtenir le buff physique de l'Elf
	virtual float PhysicalBuff() override;
	//Méthode pour obtenir le buff magique de l'Elf
	virtual float MagicBuff() override;
	//Méthode pour obtenir le buff de défense de l'Elf
	virtual float DefenceBuff() override;
};

