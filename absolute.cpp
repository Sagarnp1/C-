#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value:";
    cin>>num;
    

    if (num>0){
        num=num*(-1);
        
    }
    cout<<"the absolute value is: "<<num<<endl;
    return 99;
}