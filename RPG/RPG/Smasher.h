#pragma once
#include <iostream>
#include <string>

class Smasher
{
protected:
	//Nom du Smasher
	std::string SmasherName;

public:
	//Constructeur de la classe Smasher
	Smasher();
	//Destructeur virtuel par défaut de la classe Smasher
	virtual ~Smasher() = default;
	//Méthode virtuelle pure pour obtenir les points de vie du Smasher
	virtual float PV() = 0;
	//Méthode virtuelle pure pour obtenir le buff physique du Smasher
	virtual float PhysicalBuff() = 0;
	//Méthode virtuelle pure pour obtenir le buff magique du Smasher
	virtual float MagicBuff() = 0;
	//Méthode virtuelle pure pour obtenir le buff de défense du Smasher
	virtual float DefenceBuff() = 0;
	//Méthode virtuelle pour afficher les statistiques du Smasher
	virtual void DisplayStats();
};

