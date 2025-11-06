#include "Smasher.h"

Smasher::Smasher()
{

}

Smasher::~Smasher() = default;

void Smasher::DisplayStats()
{
    std::cout << "Combattant : " << SmasherName << "\n";
    std::cout << "PV : " << PV << "\n";
    std::cout << "Melee Buff : " << MeleeBuff() << "\n";
    std::cout << "Magic Buff : " << MagicBuff() << "\n";
    std::cout << "Resistance Buff : " << DefenceBuff() << "\n";
}

