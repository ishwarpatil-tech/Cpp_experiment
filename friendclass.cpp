#include <iostream>
using namespace std;

class Box
{
int length;
public:
Box(int l)
{
length = l;
}
friend class Display;
};
class Display
{
public:
void show(Box b)
{
cout << "Length of box = " << b.length << endl;
} };
int main() {
Box b1(10);
Display d1;
d1.show(b1);
return 0;
}
