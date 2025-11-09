#include "Weapon.h"
#include <iostream>

SmasherWeapon::SmasherWeapon()//Constructeur de la classe SmasherWeapon
{
	//Initialisation du nom du type d'arme
    TypeName = "Arme inconnue";
}
//Méthode pour afficher le type d'arme du Smasher
void SmasherWeapon::DisplayTypeWeapon()
{
	//Affichage du type d'arme
    std::cout << "Weapons of " << TypeName << "\n";
}


