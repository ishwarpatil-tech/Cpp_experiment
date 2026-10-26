#include <iostream>
using namespace std;
// Exp 4


class Rectangle
{
private:
double length;
double width;

public:

Rectangle(double l,double w)
{
length = l;
width = w;
}
double area()
{
return length*width;
}
double perimeter()
{
return 2*(length + width);
}
void display()
{
cout<<"Length:"<<length<<endl;
cout<<"Width:"<<width<<endl;
cout<<"Area:"<<area()<<endl;
cout<<"perimeter:"<<perimeter()<<endl;
}
};
int main()
{
Rectangle rect(4,40);
rect.display();
return 0;
}
