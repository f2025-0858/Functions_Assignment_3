#include <iostream>
using namespace std;
 void taxCalculation(int income){
     double tax;
        if(income < 50000){
            tax = income * 0;
            cout<<"Tax is equal to " << tax<<endl;
            cout<<"Net salary = "<<income - tax<<endl;
        }else if(income >= 50000 && income <=100000){
             tax = income * 0.1;
            cout<<"Tax is equal to " << tax<<endl;
            cout<<"Net salary = "<<income - tax<<endl;
            
        }else if(income >=100001 && income <=200000){
             tax = income * 0.2;
            cout<<"Tax is equal to " << tax<<endl;
            cout<<"Net salary = "<<income - tax<<endl;
        }else{
             tax = income * 0.3;
            cout<<"Tax = " << tax<<endl;
            cout<<"Net salary = "<<income - tax<<endl;
            
        }
    
    }
    

     
int main(){
    double income;
    cout << "enter monthly income: ";
    cin >> income;
    
   taxCalculation(income);

    return 0;
}
