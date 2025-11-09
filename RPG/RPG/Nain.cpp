#include "Nain.h"

Nain::Nain()//Constructeur de la classe Nain
{
	//Initialisation du nom du Smasher, de la taille et du poids	
	SmasherName = "Nain";
	Size = 90;
	Weight = 24;
}
//Constructeur de la classe Nain avec paramètres
Nain::Nain(int _size, int _weight)
{
	//Initialisation de la taille, du poids et du nom du Smasher
	Size = _size;
	Weight = _weight;
	SmasherName = "Nain";
}
//Destructeur virtuel de la classe Nain
Nain::~Nain()
{

}
//Méthode pour obtenir les points de vie du Nain
float Nain::PV()
{
	//Retourne les points de vie du Nain
	return 50;
}
//Méthode pour obtenir le buff physique du Nain
float Nain::PhysicalBuff()
{
	//Retourne le buff physique du Nain
	return 0.5f;
}
//Méthode pour obtenir le buff magique du Nain
float Nain::MagicBuff()
{
	//Retourne le buff magique du Nain
	return 1;
}
//Méthode pour obtenir le buff de défense du Nain
float Nain::DefenceBuff()
{
	//Retourne le buff de défense du Nain
	return 0.5f;
}

