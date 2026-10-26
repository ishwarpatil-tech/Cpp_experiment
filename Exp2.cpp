#include<iostream>
using namespace std;

//Exp 2

class Complex
{
private:
int real,imag;

public:
Complex(int r,int i)
{
real = r;
imag = i;
}
Complex add(Complex c)
{
Complex temp(0,0);
temp.real = real + c.real;
temp.imag = imag + c.imag;
return temp;
}
void display()
{
cout << real;
if (imag >= 0)
cout << "+" << imag << "i";
else
cout << "-" << -imag << "i";
}
};
int main()
{
Complex c1(4,5);
Complex c2(2,3);

Complex c3 = c1.add(c2);

cout << "First Complex Number : ";
c1.display();

cout << "\nSecond Complex Number : ";
c2.display();

cout << "\nSum = ";
c3.display();

return 0;
}
