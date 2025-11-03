

#include <iostream>
#include <string>

int main()
{
	
	std::string Pseudo;
	bool reponse = true;
	std::cout << "Comment vous appelez vous ?" << "\n";
	std::cin >> Pseudo;
	while (reponse) {
		std::cout << "Choisissez un combattant" << "\n";
		

		std::cout << "Voulez vous rejouez ?" << "\n";
		std::cin >> reponse;
	}
	
}

