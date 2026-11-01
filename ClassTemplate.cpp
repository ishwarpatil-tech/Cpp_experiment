#include<iostream>
using namespace std;

template <class T>
class Calculator {
T num1,num2;
public:
Calulator(T a, T b) {
num1 = a;
num2 = b;
}
void displayresult() {
cout << "Addition : " <<num1 + num2 << endl;
cout << "Subtraction : " <<num1 - num2 << endl;
cout << "Multiplication : " <<num1 * num2 << endl;
cout << "Division : " <<num1 / num2 << endl;
}
};
int main() {
Calculator<int> calc1(10,5);
cout << "For integers : \n";
calc1.displayresult();

Calculator<float> calc2(5.5,2.2);
cout << "For float : \n";
calc2.displayresult();

return 0;
}
