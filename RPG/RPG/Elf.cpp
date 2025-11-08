#include "Elf.h"

Elf::Elf()//Constructeur de la classe Elf
{
	//Initialisation des attributs de la classe Elf
	SmasherName = "Elf";
	Size = 106;
	Weight = 50;
}
//Constructeur paramétré de la classe Elf
Elf::Elf(int _size, int _weight)
{
	//Initialisation des attributs de la classe Elf avec les valeurs passées en paramètres
	Size = _size;
	Weight = _weight;
	SmasherName = "Elf";
}
//Destructeur virtuel de la classe Elf
Elf::~Elf()
{

}
//Méthode pour obtenir les points de vie de l'Elf
float Elf::PV()
{
	//Retourne les points de vie de l'Elf
	return 80;
}
//Méthode pour obtenir le buff physique de l'Elf
float Elf::PhysicalBuff()
{
	//Retourne le buff physique de l'Elf
	return 1;
}
//Méthode pour obtenir le buff magique de l'Elf
float Elf::MagicBuff()
{
	//Retourne le buff magique de l'Elf
	return 2;
}
//Méthode pour obtenir le buff de défense de l'Elf
float Elf::DefenceBuff()
{
	//Retourne le buff de défense de l'Elf
	return 1;
}



