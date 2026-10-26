#include <iostream>
using namespace std;

// Exp 4
// Constructor Overloading
class Area
{
public:
float result;
Area()
{
result = 0;
}
Area(int length,int width)
{
result = length*width;
}
void display()
{
cout<<"Area = "<< result << endl;
}
};
int main()
{
Area a1;
Area a2(10,20);

a1.display();
a2.display();

return 0;
}
