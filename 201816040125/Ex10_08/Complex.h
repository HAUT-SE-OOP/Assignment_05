#ifndef COMPLEX-H
#define COMPLEX-H

class Complex
{
     friend std::ostream &operator<<( std::ostream &, const Complex & );
     friend std::istream &operator>>( std::istream &, Complex & );
 public:
    explicit Complex(double=0.0,double=0.0);
    Complex operator+(const Complex & ) const;
    Complex operator-(const Complex & ) const;
    Complex operator*(const Complex & ) const;
     bool operator==(  Complex & ) ;
     bool operator!=( Complex & );

 private:
    double real;
    double imaginary;
};
#endif // COMPLEX
