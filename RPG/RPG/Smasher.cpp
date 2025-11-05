#include "Smasher.h"

Smasher::Smasher()
{

}

Smasher::~Smasher()
{

}

void Smasher::DisplayStats()
{
    std::cout << "Combattant : " << SmasherName << "\n";
    std::cout << "Melee Buff : " << MeleeBuff() << "\n";
    std::cout << "Magic Buff : " << MagicBuff() << "\n";
    std::cout << "Resistance Buff : " << ResistanceBuff() << "\n";
}

