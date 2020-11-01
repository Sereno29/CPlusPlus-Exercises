#include <iostream>

int main(int argv, char* argc[]){
	std::cout << "Rafael Mourão" << std::endl;
	std::cout << "Yoshiteru Motoshimasna" << std::endl;
	std::cout << "Lennon Amarão" << std::endl;
	if(argv > 0)
		std::cout << argc[1];
	return 0;
}
