#include "Type.h"

Type::Type()
{
	TypeName = "Type inconnu";
}

void Type::DisplayType()
{
	std::cout << "Type du combattant : " << TypeName << "\n";
}
