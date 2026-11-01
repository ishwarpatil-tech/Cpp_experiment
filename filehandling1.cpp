#include<iostream>
#include<ftream>
using namespace std;

int main() {
ofstream fout("Example2.txt");
fout<<"Welcome to file handling";
fout.close();

ifstream fin("Example2.txt");
string line;
getline(fin,line);
cout<<line;
fin.close();
}
