#include <iostream>

int main (int argc, char* argv[]){
	double password;
	std::cout << "Insert the password to the system: ";
	std::cin >> password;
	if(password == 3.0 || password == 29.29)
		std::cout << "Welcome to the system\n";
	else
		std::cout << "Access denied\n";
	return 0;
}
