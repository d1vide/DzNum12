#pragma once

#include <iostream>

class Complex {
private:
	double real;
	double imag;
public:

	Complex();
	Complex(double r, double i);

	double module();
	Complex& sum(Complex x);
	Complex& minus(Complex x);
	Complex& multiplication(Complex x);
	Complex& divide(Complex x);
	void printComplex();

	void set_imag(double im);
	double get_imag();

	void set_real(double re);
	double get_real();

	bool operator>(Complex first);
};

void printIntArray(int* mas, int n);
void printDoubleArray(double* mas, int n);
void printComplexArray(Complex* mas, int n);


int* createArray(int* mas, int n);
double* createArray(double* mas, int n);
Complex* createArray(Complex* mas, int n);



template <typename T>
T* sortBubble(T* mas, int n) {
	T* buf = new T[n];
	for (int i = 0; i < n; i++) {
		buf[i] = mas[i];
	}
	T buffer;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (buf[j] > buf[j + 1]) {
				buffer = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = buffer;
			}
		}
	}
	return buf;
}