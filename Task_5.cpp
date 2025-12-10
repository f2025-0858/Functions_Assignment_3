// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void loginSystem(string userName,int password){
    
    for(int i=1;i<=3;i++){
        cout<<"enter username: ";
        cin>>userName;
        cout << "enter password: ";
        cin>>password;
        if(userName == "admin" && password == 1234){
            cout << "Login Successfully\n";
            break;
        }else if (i<3){
        
            cout << "Try again\n";
        
        }else{
        cout<<"Account Locked !!! ";
        }
    }
    
}

int main() {
    string userName;
    
    int password;
    
    
    loginSystem(userName,password);
   
   
   

    return 0;
}