#include "Smasher.h"

Smasher::Smasher()//Constructeur de la classe Smasher
{

}
//Destructeur virtuel de la classe Smasher
void Smasher::DisplayStats()
{
	//Affichage des statistiques du Smasher
    std::cout << "Combattant : " << SmasherName << "\n";
    std::cout << "PV : " << PV() << "\n";
    std::cout << "Physical Buff : " << PhysicalBuff() << "\n";
    std::cout << "Magic Buff : " << MagicBuff() << "\n";
    std::cout << "Resistance Buff : " << DefenceBuff() << "\n";
}

