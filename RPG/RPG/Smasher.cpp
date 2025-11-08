#include "Smasher.h"

Smasher::Smasher()
{

}

void Smasher::DisplayStats()
{
    std::cout << "Combattant : " << SmasherName << "\n";
    std::cout << "PV : " << PV() << "\n";
    std::cout << "Physical Buff : " << PhysicalBuff() << "\n";
    std::cout << "Magic Buff : " << MagicBuff() << "\n";
    std::cout << "Resistance Buff : " << DefenceBuff() << "\n";
}

