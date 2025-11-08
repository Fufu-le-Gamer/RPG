#pragma once
#include "Type.h"

class Ingenieur : public Type {//classe du type Ingenieur héritant de Type
public:
	//Constructeur et déstructeur de la classe Ingenieur
	Ingenieur();
	
	virtual ~Ingenieur() override;
};

