// Arithmetic Operators (+, -, *, /, %)
// These operators allow you to perform arithmetic operations on objects of your class.

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double r, double i) : real(r), imag(i) {}

    ComplexNumber operator+(const ComplexNumber& other) {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    ComplexNumber operator-(const ComplexNumber& other) {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    ComplexNumber operator*(const ComplexNumber& other) {
        return ComplexNumber(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Other arithmetic operators can be similarly overloaded.
};
