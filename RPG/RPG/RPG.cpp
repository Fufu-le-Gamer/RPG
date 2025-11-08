

#include <iostream>
#include <cstdlib>
#include <string>
#include "Smasher.h"
#include "Humain.h"
#include "Elf.h"
#include "Nain.h"
#include "Orc.h"
#include "Hawkeye_Bow.h"
#include "Legolas_Bow.h"
#include "Hidden_Blade_Aguilar.h"
#include "Yasuke_Long_Katana.h"
#include "Excalibure.h"
#include "Netherite_Sword.h"
#include "Iron_Man_Repulsor_Gauntlet.h"
#include "Doctor_Who_Sonic_Screwdriver.h"
#include "Lightning_spell.h"
#include "Elder_Wand.h"
#include "Hollow_Knight_Dagger.h"
#include "Hello_Neighbor_Crowbar.h"

int main()
{
	std::string Pseudo;
	std::string reponse = "o";
	int ChoixCombattant = 0;
	int ChoixType = 0;
	int ChoixWeapon = 0;
	//Pointeurs vers les classes abstraites pour le polymorphisme 
	Smasher* combattant = nullptr;
	Type* type = nullptr;
	
	//Début du jeu
	std::cout << "Comment vous appelez vous ?\n";
	std::cin >> Pseudo;
	system("cls");
	std::cout << "Enchanter " << Pseudo << ", ";
	//Boucle principale du jeu
	while (reponse == "o") {
		bool RetourSmasher = false;
		bool RetourType = false;
		//Choix du combattant
		while (!RetourSmasher)
		{
			std::cout << "Choisissez un combattant\n";
			std::cout << "\nListe des combattants!\n";
			std::cout << "1. Humain\n";
			std::cout << "2. Elf\n";
			std::cout << "3. Orc\n";
			std::cout << "4. Nain\n";
			std::cout << "--> ";
			std::cin >> ChoixCombattant;
			//Suppression de l'ancien combattant s'il existe et création du nouveau combattant choisi
			delete combattant;
			combattant = nullptr;
			//Création du combattant en fonction du choix de l'utilisateur
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
			//Affichage des statistiques du combattant choisi
			std::cout << "\nStatistique de votre combattant\n";
			combattant->DisplayStats();
			//Confirmation du choix du combattant par l'utilisateur 
			std::string ConfirmationSmasher;
			std::cout << "\nTapez 'v' pour valider ce combattant ou 'r' pour revenir au menu :\n> ";
			std::cin >> ConfirmationSmasher;
			if (ConfirmationSmasher == "v")
			{
				//Validation du choix du combattant et sortie de la boucle de choix
				system("cls");
				RetourSmasher = true;
			}
			//Confirmation pour revenir au menu de choix du combattant
			else if (ConfirmationSmasher == "r")
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
		//Choix du type de combattant
		while(!RetourType)
		{
			std::cout << "Choisissez un type\n";
			std::cout << "\nListe des types!\n";
			std::cout << "1. Archer\n";
			std::cout << "2. Assassin\n";
			std::cout << "3. Warrior\n";
			std::cout << "4. Ingenieur\n";
			std::cout << "5. Mage\n";
			std::cout << "6. Voleur\n";
			std::cout << "--> ";
			std::cin >> ChoixType;
			//Suppression de l'ancien type s'il existe et création du nouveau type choisi
			delete type;
			type = nullptr;
			// Création du type en fonction du choix de l'utilisateur
			if (ChoixType == 1) {
				type = new Archer();
				system("cls");
				//Affichage du type choisi
				type->DisplayType();
				std::cout << "\nArmes d'Archer : \n";
				std::cout << "1.Legolas Bow\n";
				std::cout << "2.Hawkeye Bow\n";
				std::cout << "--> ";
				std::cin >> ChoixWeapon;
				// Création de l'arme en fonction du choix de l'utilisateur
				if (ChoixWeapon == 1) {
					Legolas_Bow* weapon1 = new Legolas_Bow();
					//Affichage de l'arme choisie
					weapon1->DisplayArcherWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Hawkeye_Bow* weapon2 = new Hawkeye_Bow();
					weapon2->DisplayArcherWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else if (ChoixType == 2) {
				type = new Assassin();
				system("cls");
				type->DisplayType();
				std::cout << "\nArmes d'Assassin : \n";
				std::cout << "1.Yasuke Long Katana\n";
				std::cout << "2.Hidden Blade Aguilar\n";
				std::cout << "--> ";
				std::cin >> ChoixWeapon;

				if (ChoixWeapon == 1) {
					Yasuke_Long_Katana* weapon1 = new Yasuke_Long_Katana();
					weapon1->DisplayAssassinWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Hidden_Blade_Aguilar* weapon2 = new Hidden_Blade_Aguilar();
					weapon2->DisplayAssassinWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else if (ChoixType == 3) {
				type = new Warrior();
				system("cls");
				type->DisplayType();
				std::cout << "\nArmes de Warrior : \n";
				std::cout << "1. Netherite Sword\n";
				std::cout << "2. Excalibure\n";
				std::cout << "--> ";
				std::cin >> ChoixWeapon;

				if (ChoixWeapon == 1) {
					Netherite_Sword* weapon1 = new Netherite_Sword();
					weapon1->DisplayWarriorWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Excalibure* weapon2 = new Excalibure();
					weapon2->DisplayWarriorWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else if (ChoixType == 4) {
				type = new Ingenieur();
				system("cls");
				type->DisplayType();
				std::cout << "\nArmes d'Ingenieur : \n";
				std::cout << "1.Doctor Who Sonic Screwdriver\n";
				std::cout << "2.Iron Man Repulsor Gauntlet\n";
				std::cout << "--> ";
				std::cin >> ChoixWeapon;

				if (ChoixWeapon == 1) {
					Doctor_Who_Sonic_Screwdriver* weapon1 = new Doctor_Who_Sonic_Screwdriver();
					weapon1->DisplayIngenieurWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Iron_Man_Repulsor_Gauntlet* weapon2 = new Iron_Man_Repulsor_Gauntlet();
					weapon2->DisplayIngenieurWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else if (ChoixType == 5) {
				type = new Mage();
				system("cls");
				type->DisplayType();
				std::cout << "\nArmes de Mage\n";
				std::cout << "1.Lightning Spell\n";
				std::cout << "2.Elder Wand\n";
				std::cout << "-->";
				std::cin >> ChoixWeapon;

				if (ChoixWeapon == 1) {
					Lightning_spell* weapon1 = new Lightning_spell();
					weapon1->DisplayMageWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Elder_Wand* weapon2 = new Elder_Wand();
					weapon2->DisplayMageWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else if (ChoixType == 6) {
				type = new Voleur();
				system("cls");
				type->DisplayType();
				std::cout << "\nArmes de Voleur\n";
				std::cout << "1.Hello Neighbor Crowbar\n";
				std::cout << "2.Hollow Knight Dagger\n";
				std::cout << "-->";
				std::cin >> ChoixWeapon;

				if (ChoixWeapon == 1) {
					Hello_Neighbor_Crowbar* weapon1 = new Hello_Neighbor_Crowbar();
					weapon1->DisplayVoleurWeapon();
					delete weapon1;
					weapon1 = nullptr;
				}
				else if (ChoixWeapon == 2) {
					Hollow_Knight_Dagger* weapon2 = new Hollow_Knight_Dagger();
					weapon2->DisplayVoleurWeapon();
					delete weapon2;
					weapon2 = nullptr;
				}
				else {
					std::cout << "Choix invalide\n";
					continue;
				}
			}
			else {
				std::cout << "Choix invalide\n";
				continue;
			}
			//Confirmation du choix de l'arme par l'utilisateur
			std::string ConfirmationWeapon;
			std::cout << "\nTapez 'v' pour valider votre arme ou 'r' pour revenir au menu :\n> ";
			std::cin >> ConfirmationWeapon;

			if (ConfirmationWeapon == "v")
			{
				system("cls");
				RetourType = true;
			}
			else if (ConfirmationWeapon == "r")
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

		std::cout << "Bonne chance, " << Pseudo << "\n";
		//Nettoyage de la mémoire avant de rejouer ou quitter le jeu
		delete combattant;
		combattant = nullptr;
		delete type;
		type = nullptr;

		std::cout << "Voulez vous rejouez ?(o/n)\n";
		std::cin >> reponse;
		system("cls");
	}
	
}

