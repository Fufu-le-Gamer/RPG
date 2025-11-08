#pragma once
#include "Type.h"

class Mage : public Type {//classe Mage héritant de Type
public:
	//Constructeur et déstructeur de la classe Mage
	Mage();
	//Destructeur virtuel de la classe Mage
	virtual ~Mage() override;
};

