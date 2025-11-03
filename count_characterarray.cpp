#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char>a={'s','s','w','w'};
    int i=0;
    int count=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    cout<<count;
    return 0;
}
