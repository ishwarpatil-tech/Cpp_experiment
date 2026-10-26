#include <iostream>
using namespace std;
class Vehicle
{
public:
Vehicle()
{
cout<<"This is a Vehicle\n";
}
};
class Car : public Vehicle
{
public:
Car()
{
cout<<"This Vehicle is a Car\n";
}
};
class Sportscar : public Car
{
public:
Sportscar()
{
cout<<"This is a Sports Car\n";
}
};
int main()
{
Sportscar obj;
return 0;
}

