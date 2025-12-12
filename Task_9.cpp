#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Amstrong numbers from: ";
    cin >> start;
    
    cout << "Amstrong numbers to: ";
    cin >> end;
    
    for (int i = start; i <= end; i++){
        int count = 0, digits = i, sum = 0;
        
        while (digits > 0){
            digits /= 10;
            count ++;
        }
        
        int rem = i;
        
        for (int j = 1; j <= count; j++){
            int temp = rem%10;
            int temp_2 = 1;
            
            for (int k = 1; k <= count; k++){
                temp_2 *= temp;
            }
            sum += temp_2;
            rem /=10;
        }
        
        if (sum == i){
            cout << i << " is an amstrong number" << endl;
        }
    }
  

    return 0;
}