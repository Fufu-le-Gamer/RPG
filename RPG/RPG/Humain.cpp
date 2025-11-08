#include "Humain.h"

Humain::Humain()//Constructeur par défaut de la classe Humain
{
	//Initialisation des attributs spécifiques à la classe Humain
	SmasherName = "Humain";
	Size = 180;
	Weight = 75;
}
//Constructeur paramétré de la classe Humain
Humain::Humain(int _size, int _weight)
{
	//Initialisation des attributs spécifiques à la classe Humain avec les valeurs passées en paramètres
	Size = _size;
	Weight = _weight;
	SmasherName = "Humain";
}
//Destructeur virtuel de la classe Humain
Humain::~Humain()
{

}
//Méthode pour obtenir les points de vie du Humain
float Humain::PV()
{
	//Retourne les points de vie du Humain
	return 100;
}

float Humain::PhysicalBuff()
{
	return 1.5f;
}

float Humain::MagicBuff()
{
	return 1;
}

float Humain::DefenceBuff()
{
	return 1;
}


