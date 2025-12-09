#include <iostream>
using namespace std;

void scholarshipCriteria (int a, int b){
    if(a>=85 && b>=80){
        cout<<"Full Scholarship";
        
    }else if(a>=70){
        cout<<"Partiall Scholarship";
    }else{
        cout<<"No Scholarship";
    }
}

int main() {
    int marks,attendance,income;
    
    cout<<"enter marks: ";
    cin>>marks;
    
    cout<<"enter attendance: ";
    cin>>attendance;
    
    cout<<"enter income: ";
    cin>>income;
    
    scholarshipCriteria(marks, attendance);
    
    

    return 0;
}