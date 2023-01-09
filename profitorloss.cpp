#include<iostream>
using namespace std;
int main(){
    int sp,cp,loss,profit;
    cout<<"Enter the Selling price:";
    
    cin>>sp;
    cout<<"Ennter the cost price:";
    cin>>cp;
    

    if (sp>cp){
        profit=sp-cp;
        cout<<"You got profit. Profit Amount = "<<profit<<endl; 
    }
    else if(cp>sp){
        loss=cp-sp;
        cout<<"You don't know how to sell. Loss = "<<loss<<endl;
    }
    else{
        cout<<"No Pain No Gain"<<endl;
        
    }
    return 0;
}