/*Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Samp*/
#include <iostream>
using namespace std;

int main()
{
int a , b, c;
a = 4;
b = 5;
cout<<"Before swappping: a : "<< a<< "\n";
cout<<"Before swapping : b : "<<b <<"\n";
c = b;
b = a;
a = c;
cout << " After swapping : a : " <<a <<"\n";
cout<<"After swapping :  b : "<<b<< "\n" ;
return 0;
}