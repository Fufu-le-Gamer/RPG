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
	//Retourne les points de vie de l'Humain
	return 100;
}
//Méthode pour obtenir les buff physique de l'Humain
float Humain::PhysicalBuff()
{
	//Retourne le buff physique de l'Humain
	return 1.5f;
}
//Méthode pour obtenir le buff magique de l'Humain
float Humain::MagicBuff()
{
	//Retourne le buff magique de l'Humain
	return 1;
}
//Méthode pour obtenir le buff de défance de l'Humain
float Humain::DefenceBuff()
{
	//Retourne le buff de défance de l'Humain
	return 1;
}


