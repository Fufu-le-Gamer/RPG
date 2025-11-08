#pragma once
#include <iostream>
#include <string>

class Type
{
protected:
	//Nom du type de combattant
	std::string TypeName;

public:
	//Constructeur de la classe Type
	Type();
	//Destructeur virtuel par défaut de la classe Type
	virtual ~Type() = default;
	//Méthode virtuelle pour afficher le type de combattant
	virtual void DisplayType();
};

