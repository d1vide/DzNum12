#include "Header.h"

Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

double Complex::module() {
	return sqrt(this->imag * this->imag + this->real * this->real);
}

Complex& Complex::sum(Complex x) {
	Complex result(this->real + x.real, this->imag + x.imag);
	return result;
}

Complex& Complex::minus(Complex x) {
	Complex result(this->real - x.real, this->imag - x.imag);
	return result;
}

Complex& Complex::multiplication(Complex x) {
	Complex result(this->real * x.real - this->imag * x.imag, this->real * x.imag + this->imag * x.real);
	return result;
}

Complex& Complex::divide(Complex x) {
	Complex result((real * x.real + imag * x.imag) / (x.real * x.real + x.imag * x.imag), (x.real * imag - real * x.imag) / (x.real * x.real + x.imag * x.imag));
	return result;
}

void Complex::printComplex() {
	if (imag > 0) {
		std::cout << real << '+' << imag << 'i' << std::endl;
	}
	else if (imag < 0) {
		std::cout << real << '-' << abs(imag) << 'i' << std::endl;
	}
	else {
		std::cout << real << std::endl;
	}
}

void Complex::set_imag(double im) {
	imag = im;
}

double Complex::get_imag() {
	return imag;
}

void Complex::set_real(double re) {
	real = re;
}

double Complex::get_real() {
	return real;
}



int* createArray(int* mas, int n) {
	mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	return mas;
}

double* createArray(double* mas, int n) {
	mas = new double[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	return mas;
}

Complex* createArray(Complex* mas, int n) {
	mas = new Complex[n];
	for (int i = 0; i < n; i++) {
		mas[i].set_imag(rand() % 100);
		mas[i].set_real(rand() % 100);

	}
	return mas;
}

void printIntArray(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << "\n";
}

void printDoubleArray(double* mas, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << "\n";
}

void printComplexArray(Complex* mas, int n) {
	for (int i = 0; i < n; i++) {
		mas[i].printComplex();
	}
	std::cout << "\n";
}

bool Complex::operator>(Complex first) {
	return this->module() > first.module();
 }



