#include "Orc.h"

Orc::Orc()//Constructeur de la classe Orc
{
	//Initialisation du nom du Smasher, de la taille et du poids
	SmasherName = "Orc";
	Size = 220;
	Weight = 210;
}
//Constructeur de la classe Orc avec paramètres
Orc::Orc(int _size, int _weight)
{
	//Initialisation de la taille, du poids et du nom du Smasher
	Size = _size;
	Weight = _weight;
	SmasherName = "Orc";
}
//Destructeur virtuel de la classe Orc
Orc::~Orc()
{

}
//Méthode pour obtenir les points de vie de l'Orc
float Orc::PV()
{
	//Retourne les points de vie de l'Orc
	return 200;
}
//Méthode pour obtenir le buff physique de l'Orc
float Orc::PhysicalBuff()
{
	//Retourne le buff physique de l'Orc
	return 2;
}
//Méthode pour obtenir le buff magique de l'Orc
float Orc::MagicBuff()
{
	//Retourne le buff magique de l'Orc
	return 0.5f;
}
//Méthode pour obtenir le buff de défense de l'Orc
float Orc::DefenceBuff()
{
	//Retourne le buff de défense de l'Orc
	return 2;
}
