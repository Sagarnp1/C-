
#include <iostream>
using namespace std;

int main()
{
int a , b ;
a = 5; //0101
b = 6; //0110
cout<<(a<<1)<<endl; //10
cout<<(b>>1) <<endl; // 3
cout<< (a | b)<<endl; //0111
cout<< (a & b)<<endl; //0100
int c = 4;
int d = 5;
  c-=5;

cout<<c<<endl;

return 0;
}