#include<iostream>
#include<fstream>
using namespace std;

int main() {
ofstream fout("Example.txt");
fout<<"WELCOME";
fout.close();

ifstream fin("example.txt");
string line;
getline(fin , line);
cout << line;
fin.close();
}
