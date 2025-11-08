#pragma once
#include "Type.h"

class Warrior : public Type {//classe du type de combattant Warrior héritant de Type
public:
	//Constructeur et destructeur de la classe Warrior
	Warrior();
	
	virtual ~Warrior() override;
};

