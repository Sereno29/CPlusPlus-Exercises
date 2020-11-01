#include <iostream>

int main(int argc, char* argv[]){
	int firstNumber = 0;
	int secondNumber = 0;
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;
	std::cout << "Result of sum: " << firstNumber + secondNumber;
	return 0;
}
