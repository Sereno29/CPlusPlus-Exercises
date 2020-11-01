#include <iostream>
#include <string>

int main(int argv, char* argc[]){
	std::string myName;
	std::cout << "Enter your name: \n";
	std::cin >> myName;
	std::cout << "Your name is " << myName;
	return 0;
}
