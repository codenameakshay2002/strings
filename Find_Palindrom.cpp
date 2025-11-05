// Online C++ compiler to run C++ program online
// find wheather the string is palindrom or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ok{
    public:
    bool yes(string hay,int n){
          int i=0;
          while(i<n){
        if(hay[i]!=hay[n]){
            return false;
        }else{
            i++;
            n--;
        }
          }
          return true;
    }
    
};


int main() {
    string hay = "dadisidad";
    int n= hay.size()-1;
    
    ok s; //object
    
    bool ok = s.yes(hay,n);
     if(ok==true){
         cout<<"The given string is palindrom";
     }else if(ok==false) {
      cout<<"The given string is not palindrom";
     }
  return 0;  
}