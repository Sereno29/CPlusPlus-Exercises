#include <iostream>

int main (int argc, char* argv[]){
	for (int i = 99; i > 0; i--){
		std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down. pass it around, " << i-1 << " bottles of beer on the wall...\n\n";
	}
	return 0;
}
