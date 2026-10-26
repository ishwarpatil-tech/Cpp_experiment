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
class Engine
{
public:
Engine()
{
cout<<"This is an Engine\n";
}
};
class Car:public Vehicle , public Engine
{
public:
Car()
{
cout<<"This Vehicle is a car\n";
}
};
int main()
{
Car obj;
return 0;
}

