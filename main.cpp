#include <iostream>
#include <functional>
#include <string>
#include <stdexcept> 
#include <stdlib.h>

template<typename T>
void sumAndPrint(T x, T y) {
	std::cout << x << " + " << y << " = " << std::plus<T>()(x, y) << std::endl;
}

int main(int argc, char **argv)
{
	int a;
	int b;
	
	if (argc == 3) {
		try {
			a = std::stoi(std::string(argv[1]));
			b = std::stoi(std::string(argv[2]));
			sumAndPrint(a, b);
		} catch(std::invalid_argument& except) {
			std::cerr << "ERROR! Invalid arguments! \nPlease enter two integer number or none.\n";
			exit (EXIT_FAILURE);
		}
		exit (EXIT_SUCCESS);
	}
	
	std::cout << "a: ";
	std::cin >> a;

	std::cout << "b: ";
	std::cin >> b;
	
	sumAndPrint(a, b);
	
	exit (EXIT_SUCCESS);
}
