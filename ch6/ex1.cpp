#include <iostream>
#include <string>

void onehundredbottlesofbeersong(){
	for (int i = 99; i > 0; i--){
		std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down. pass it around, " << i-1 << " bottles of beer on the wall...\n\n";
	}
}

double calculator(){
	std::string operation;
	double firstNumber;
	double secondNumber;
	double result;
	std::cout << "Enter the operation: ";
	std::cin >> operation;
	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;
	if(operation == "+"){
		result = firstNumber + secondNumber;
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << result;
	}
	else if(operation == "-"){
		result = firstNumber - secondNumber;
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << result;
	}
	else if(operation == "*"){
		result = firstNumber * secondNumber;
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << result;
	}
	else if(operation == "/"){
		result = firstNumber / secondNumber;	
		std::cout << "Result of " << firstNumber << operation << secondNumber << ": " << result;
	}
	else{
		std::cout << "Operador não reconhecido.";
		return 0;
	}
	return result;
}

int main (int argc, char* argv[]){
	int option = 0;
	do {
		std::cout << "Choose between options:\n1. Calculator\n2.100 bottles of beer\nOption: ";
		std::cin >> option;
	}while(option < 1 || option >2);
	switch(option){
		case 1:
			calculator();
			break;
		case 2:
			onehundredbottlesofbeersong();
			break;
		default:
			std::cout << "Error!";
			break;
	}
	return 0;
}
