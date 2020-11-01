#include <iostream>
#include <string>

const char* translateOneThroughNineteen(int number){
	switch(number){
		case 1:
			return " one";
		case 2:
			return " two";
		case 3:
			return " three";
		case 4:
			return " four";
		case 5:
			return " five";
		case 6:
			return " six";
		case 7:
			return " seven";
		case 8:
			return " eight";
		case 9:
			return " nine";
		case 10:
			return " ten";
		case 11:
			return " eleven";
		case 12:
			return " twelve";
		case 13:
			return " thirteen";
		case 14:
			return " fourteen";
		case 15:
			return " fifteen";
		case 16:
			return " sixteen";
		case 17:
			return " seventeen";
		case 18:
			return " eighteen";
		case 19:
			return " nineteen";
		defautl:
			return "";
	}
}

const char* translateTens(int number, bool* isTranslationDone){
	switch(number/10){
		case 1:
			*isTranslationDone = true;
			return translateOneThroughNineteen(number);
		case 2: 
			return " twenty";
		case 3: 
			return " thirty";
		case 4: 
			return " fourty";
		case 5: 
			return " fifty";
		case 6: 
			return " sixty";
		case 7: 
			return " seventy";
		case 8: 
			return " eighty";
		case 9: 
			return " ninety";
		default:
			return "";
	}
}

void translateThreeDigits(int number, std::string name){
	std::string answer = "";
	bool isDone = false;
	if(number != 0){
		if(number / 100 != 0){
			std::cout << translateOneThroughNineteen(number / 100) << " hundred";			
			//answer.append(translateOneThroughNineteen(number / 100));
			//answer.append(" hundred");
		}
		if(number % 100 != 0){
			std::cout << translateTens(number % 100, &isDone);
			//answer.append(translateTens(number % 100, &isDone));
		}
		if(number % 10 != 0 && !isDone){
			std::cout << translateOneThroughNineteen(number % 10);
			//answer.append(translateOneThroughNineteen(number % 10));
		}
		std::cout << " " << name;
		//answer.append(name);
		//if(number > 1)
			//std::cout << "s";
			//answer.append("s");
	}
	//return answer;
}


void translateToEnglish(int number){
	//std::string answer = "";
	//std::string aux = "";
	std::string names[4] =  {"billion", "million", "thousand", ""};
	for(int i = 1000000000, j = 0; i >= 1; i/=1000, j++){
		translateThreeDigits(number / i, names[j]);
		number = number % i;
		//if(aux != "")
			//answer.append(aux);
	}
	//return answer;
}


int main (int argc, char* argv[]){
	int number;
	std::cout << "Enter number to be translated to English (less than a billion): ";
	std::cin >> number;
	std::cout << "\nTranslation:\n";
	translateToEnglish(number);
	std::cout << "\n";
	return 0;
}
