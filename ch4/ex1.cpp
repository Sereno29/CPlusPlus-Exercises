#include <iostream>

int main(int argc, char* argv[]){
	int firstAge;
	int secondAge;
	std::cout << "Enter first age: ";
	std::cin >> firstAge;
	std::cout << "Enter second age: ";
	std::cin >> secondAge;
	if(firstAge >= 100 || firstAge >= 100)
		firstAge >= secondAge ? 
			std::cout << "Behaving differently" :
			std::cout << "Behaving differently";
	else
		firstAge >= secondAge ? 
			std::cout << "Bigger age: " << firstAge :
			std::cout << "Bigger age: " << secondAge;
	return 0;
}
