#include <iostream>
#include <functional>
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
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sumAndPrint(a, b);
		return 0;
	}
	
	std::cout << "a: ";
	std::cin >> a;

	std::cout << "b: ";
	std::cin >> b;
	
	sumAndPrint(a, b);
	
	return 0;
}
