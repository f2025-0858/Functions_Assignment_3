// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void fareCalculation(float distance){
     int seatType;
    cout<<"Select seat type\n";
    cout << "1. Economy = Rs. 5/km\n";
    cout << "2. Business = Rs.8/km\n";
    cout << "3. First Class = Rs.12/km\n";
    cout << "Enter seat type: ";
    cin>>seatType;
    
    switch(seatType){
        case 1: cout << "Total Fare = " <<distance*5<<endl;
        break;
        case 2: cout << "Total Fare = " <<distance*8<<endl;
        break;
        case 3: cout << "Total Fare = " <<distance*12<<endl;
        break;
        default:cout<<" Invalid seat type "<<endl;
    }
    
}
int main() {
    float distance;
    cout<<"Enter Distance in km: ";
    cin>>distance;
    
    fareCalculation(distance);
   

    return 0;
}