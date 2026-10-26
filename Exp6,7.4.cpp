#include <iostream>
using namespace std;
class Vehicle
{
public:
Vehicle()
{
cout << "this is a Vehicle\n";
}
};
class Car:public Vehicle
{
public:
Car()
{
cout<<"This is a Car\n";
}
};
class Bus:public Vehicle
{
public:
Bus()
{
cout<<"This is a Bus\n";
}
};
int main()
{
Car obj1;
Bus obj2;
return 0;
}

