// Find the length of the string 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char>a={'s','s','w','w'};
    int i=0;
    int count=0;
    //if the index is not equal null value increase the value of the count
    while(a[i]!='\0'){
        count++;
        i++;
    }
    cout<<count;
    return 0;
}
// out should be 4
