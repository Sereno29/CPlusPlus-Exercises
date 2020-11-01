#include <iostream>

int main (int argc, char* argv[]){
	int option = 0;
	do {
		std::cout << "Choose between your favorite beverage from the following options: \n 1.Coffee\n 2.Tea\n 3.Soft drink\n 4.Wine\n 5.Beer\n 6.Water\nOption: ";
		std::cin >> option;
	}while(option < 1 || option >6);
	std::cout << "You like to drink ";
	switch(option){
		case 1:
			std::cout << "coffee.";
			break;
		case 2:
			std::cout << "tea.";
			break;
		case 3:
			std::cout << "soft drink.";
			break;
		case 4:
			std::cout << "wine.";
			break;
		case 5:
			std::cout << "beer.";
			break;
		case 6:
			std::cout << "water.";
			break;
		default:
			std::cout << "nothing?? Error.";
			break;
	}
	return 0;
}
