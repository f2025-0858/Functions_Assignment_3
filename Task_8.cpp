
#include <iostream>
using namespace std;
void timeConvertor(float x){
        if(x <12){
         cout<<"time is " << x << " AM "<<endl;
        }else if(x ==12){
          cout<<"Time is " << x << " PM "<<endl;
        }else if(x > 12 && x < 24){
          cout<<"Time is " << x-12 << " PM "<<endl;
        }else{
           cout<<"Invalid time enter correct time ! ";
        }
}     
        
int main() {
  float time;
  cout<<"enter time in 24 hour format: ";
  cin>>time;
  
  
  timeConvertor(time);

    return 0;
}
