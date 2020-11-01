#include <iostream>

int main( int argc, char *argv[]){
	double firstNumber;
	double secondNumber;
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;
	std::cout << "Division result: " << firstNumber/secondNumber;
	return 0;
}
