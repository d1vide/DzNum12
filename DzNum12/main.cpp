#include "Header.h"

int main() {
	setlocale(0, "");
	int n = 6;

	int* arrayint = new int;
	arrayint = createArray(arrayint, n);
	printIntArray(arrayint, n);

	double* arraydouble = new double;
	arraydouble = createArray(arraydouble, n);
	printDoubleArray(arraydouble, n);

	Complex* arraycomplex = new Complex;
	arraycomplex = createArray(arraycomplex, n);
	printComplexArray(arraycomplex, n);

	std::cout << "\n\n";

	printIntArray(sortBubble(arrayint, n), n);
	printDoubleArray(sortBubble(arraydouble, n), n);
	printComplexArray(sortBubble(arraycomplex, n), n);

	std::cout << "\n\n";

	return 0;
}