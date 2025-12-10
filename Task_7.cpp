// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void billCalculation(int units){
     float baseBill=0;
  float surCharges=0;
   float finalBill=0;
   for(int i =1;i<=units;i++){
       if(units<=100){
            baseBill += 10;
       }
       else if(units<=200){
           baseBill += 15;
       }
       else{
           baseBill+= 20;
       }
       
   }
  if(units > 1000){
      surCharges = baseBill * 0.05;
  }
  finalBill = baseBill + surCharges;
  
  
  cout<<"Base bill is "<<baseBill<<endl;
  cout<<"Sur charges is "<<surCharges<<endl;
  cout<<"final bill is "<<finalBill<<endl;
    
}
int main() {
    int units ;
    cout<<"enter total numbers of units: ";
    cin>>units;
  
  billCalculation(units);

    return 0;
}