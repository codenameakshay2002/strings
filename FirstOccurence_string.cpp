#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length())
            return -1;
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    string hay = "sadbutsad";
    string need = "sad";
    
    Solution s;                      // ✅ Create object
    cout << s.strStr(hay, need);     // ✅ Call through object
    
    return 0;
}