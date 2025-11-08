#pragma once
#include <iostream>
#include <string>

class SmasherWeapon
{
protected:
	//Nom du type d'arme
	std::string TypeName;

public:
	//Constructeur de la classe SmasherWeapon
	SmasherWeapon();
	//Destructeur virtuel par défaut de la classe SmasherWeapon
	virtual ~SmasherWeapon() = default;
	//Méthode virtuelle pour afficher le type d'arme
	virtual void DisplayTypeWeapon();
};

