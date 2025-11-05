

#include <iostream>
#include <string>
#include "Humain.h"
#include "Elf.h"
#include "Nain.h"
#include "Orc.h"

int main()
{
	std::string Pseudo;
	std::string reponse = "o";
	int ChoixCombattant = 0;
	bool retour = false;
	Smasher* combattant = nullptr;

	std::cout << "Comment vous appelez vous ?\n";
	std::cin >> Pseudo;
	std::cout << "Enchanter " << Pseudo << ", ";
	while (reponse == "o") {
		while (!retour)
		{
			std::cout << "choisissez un combattant\n";
			std::cout << "\nListe des combattants!\n";
			std::cout << "1. Humain\n";
			std::cout << "2. Elf\n";
			std::cout << "3. Orc\n";
			std::cout << "4. Nain\n";
			std::cout << "--> ";
			std::cin >> ChoixCombattant;

			delete combattant;

			if (ChoixCombattant == 1) {
				combattant = new Humain();
			}
			else if (ChoixCombattant == 2) {
				combattant = new Elf();
			}
			else if (ChoixCombattant == 3) {
				combattant = new Nain();
			}
			else if (ChoixCombattant == 4) {
				combattant = new Orc();
			}
			else {
				std::cout << "Choix invalide\n";
				continue;
			}

			std::cout << "\nStatistique de votre combattant\n";
			combattant->DisplayStats();

			std::string confirmation;
			std::cout << "\nTapez 'v' pour valider ce combattant ou 'r' pour revenir au menu :\n> ";
			std::cin >> confirmation;

			if (confirmation == "v")
			{
				retour = true;
			}
			else if (confirmation == "r")
			{
				std::cout << "\nTrès bien, choisissez un autre combattant.\n";
			}
			else
			{
				std::cout << "\nEntrée invalide. Retour au menu.\n";
			}
		}
		std::cout << "\nVous avez confirmer votre combattant !\n";
		std::cout << "Bonne chance, " << Pseudo << "\n";

		delete combattant;

		std::cout << "Voulez vous rejouez ?\n";
		std::cin >> reponse;
	}
	
}

