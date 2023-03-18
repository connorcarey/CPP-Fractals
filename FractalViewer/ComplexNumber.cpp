#include "ComplexNumber.h"

class ComplexNumber {

private:

	long double real; // Real number from a complex number (A + bi) -> A
	long double imaginary; // Imaginary coefficient from a complex number (a + Bi) -> B

public:
	
	// Construct a complex number
	ComplexNumber(long double real, long double imaginary){
		this->real = real;
		this->imaginary = imaginary;
	}

	// Add one complex number (this) to an other (a + bi) + (c + di)
	ComplexNumber add(ComplexNumber other) {
		return ComplexNumber(real + other.real, imaginary + other.imaginary);
	}

	// Subtract one Complex number (this) from an other (a + bi) - (c + di)
	ComplexNumber subtract(ComplexNumber other) {
		return ComplexNumber(real - other.real, imaginary - other.imaginary);
	}

	// Multiply two complex numbers. (a + bi) * (c + di)
	ComplexNumber multiply(ComplexNumber other) {
		return ComplexNumber(real * other.real + imaginary * other.imaginary * -1, imaginary * other.real + other.imaginary * real);
	}

	// Complex number raised to a real number. (a + bi)^power
	ComplexNumber realPow(int power) {
		if (power <= 1) {
			return ComplexNumber(real, imaginary);
		}
		return multiply(realPow(power - 1));
	}

};
