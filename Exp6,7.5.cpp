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
class Sportscar : public Car
{
public:
Sportscar()
{
cout<<"This is a Sportscar\n";
}
};
int main()
{
Sportscar obj1;
Bus obj2;
return 0;
}

