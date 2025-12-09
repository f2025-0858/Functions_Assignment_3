#include <iostream>
using namespace std;

void charCheck (char ch){
    if (ch >=65 && ch <= 90){
       if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85){
           cout << "Uppar Case Vowel\n";
       }else{
          cout << "Uppar Case Consonent\n";
       }
   }else if (ch >= 97 && ch <= 122){
       if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117){
           cout << "Lower Case Vowel\n";
       }else{
          cout << "Lower Case Consonent\n";
       }
   }else{
       cout << "Not a character/ an Alphabet\n";
   }
}

int main() {
    
   char ch;
   cout<<"enter character: ";
   cin>>ch;

   charCheck (ch);
         
    
    return 0;
}