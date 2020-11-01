#include <iostream>
#include <string>

int main(int argc, char* intgv[]){
	std::string operation;
	double firstNumber;
	double secondNumber;
	std::cout << "Enter the operation: ";
	std::cin >> operation;
	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;
	if(operation == "+")
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << firstNumber + secondNumber;
	else if(operation == "-")
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << firstNumber - secondNumber;
	else if(operation == "*")			
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << firstNumber * secondNumber;
	else if(operation == "/")
			std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << firstNumber / secondNumber;
	else
		std::cout << "Operador não reconhecido.";
	return 0;
}
