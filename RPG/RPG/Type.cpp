#include "Type.h"

Type::Type()//Constructeur de la classe Type
{
	//Initialisation du nom du type de combattant
	TypeName = "Type inconnu";
}
//Méthode pour afficher le type de combattant
void Type::DisplayType()
{
	//Affichage du type de combattant
	std::cout << "Type du combattant : " << TypeName << "\n";
}
