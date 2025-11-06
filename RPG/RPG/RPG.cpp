

#include <iostream>
#include <cstdlib>
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
	Smasher* combattant = nullptr;
	
	std::cout << "Comment vous appelez vous ?\n";
	std::cin >> Pseudo;
	system("cls");
	std::cout << "Enchanter " << Pseudo << ", ";
	while (reponse == "o") {
		bool retour = false;
		while (!retour)
		{
			std::cout << "Choisissez un combattant\n";
			std::cout << "\nListe des combattants!\n";
			std::cout << "1. Humain\n";
			std::cout << "2. Elf\n";
			std::cout << "3. Orc\n";
			std::cout << "4. Nain\n";
			std::cout << "--> ";
			std::cin >> ChoixCombattant;

			delete combattant;
			combattant = nullptr;

			if (ChoixCombattant == 1) {
				combattant = new Humain();
			}
			else if (ChoixCombattant == 2) {
				combattant = new Elf();
			}
			else if (ChoixCombattant == 3) {
				combattant = new Orc();
			}
			else if (ChoixCombattant == 4) {
				combattant = new Nain();
			}
			else {
				std::cout << "Choix invalide\n";
				continue;
			}
			system("cls");
			std::cout << "\nStatistique de votre combattant\n";
			combattant->DisplayStats();

			std::string confirmation;
			std::cout << "\nTapez 'v' pour valider ce combattant ou 'r' pour revenir au menu :\n> ";
			std::cin >> confirmation;

			if (confirmation == "v")
			{
				system("cls");
				retour = true;
			}
			else if (confirmation == "r")
			{
				system("cls");
				std::cout << "\nTrès bien, choisissez un autre combattant.\n";
			}
			else
			{
				system("cls");
				std::cout << "\nEntrée invalide. Retour au menu.\n";
			}
		}
		std::cout << "\nVous avez confirmer votre combattant !\n";
		std::cout << "Bonne chance, " << Pseudo << "\n";

		delete combattant;
		combattant = nullptr;

		std::cout << "Voulez vous rejouez ?(o/n)\n";
		std::cin >> reponse;
		system("cls");
	}
	
}

