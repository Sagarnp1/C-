

#include <iostream>


using namespace std;


int main()
{

    int routine;
  
  
    cout<<""Enter a day of the week (Sunday = 0, Monday = 1, ...:";
  
  cin>>routine;
 
   switch(routine){
    
    case 1:
        cout<<"It's Sunday: Math,Microprocessor,Question set practice";
 
       break;
  
      case 2:
        cout<<"It's Monday: Electric circuit thoery, Math"<<endl;
  
      break;
      
  case 3:
     
   cout<<" It's Tuesday: Machine, C++"<<endl;
     
   break;
    
    case 4:
    
    cout<<"It's Wenesday: Watch movies, Question set practice, Math"<<endl;
  
      break;
     
   case 5:
   
     cout<<"It's Thursday: Microprocessor, C++ , Machine"<<endl;
    
    break;
 
       case 6:
 
       cout<<"It's Friday: TIme for a relax "<<endl;
 
       break;
 
       case 7:
  
      cout<<"It's Saturday: Revise all and watch movies"<<endl;
    
    break;
        
 
       default:
    
    cout<<"Sorry you entered wrong days; Thank you!!";
      
  
    }
 
   

    return 0;

}

