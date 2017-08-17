/*
Given a string S,of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as space-separated strings on a single line
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    cin.ignore();
    string  str[n];
    for(int i=0; i<n; i++){
        getline(cin, str[i]);
    }        
    
    for(int i=0; i<n; i++){
        char chars[str[i].length()];
        strcpy(chars, str[i].c_str());
        for(int x=0; x<sizeof(chars); x=x+2){
            cout << chars[x];
        }
        cout << " ";
        for(int x=1; x<sizeof(chars); x=x+2){
            cout << chars[x];
        }
        cout << endl;
    }
    
    return 0;
}
