//Given a number (as string) and two integers a and b, divide the string in two non-empty parts such that the first part is divisible by a and the second part is divisible by b. In case multiple answers exist, return the string such that the first non-empty part has minimum length.


// Input:
// 1200 4 3
// Output:
// 12 00
// Explanation:
// 12 is divisible by 4, and
// 00 is divisible by 3.




#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s,e,S="1200";
    int a=4,b=3;


    for(int i=1;i<S.size()-1;i++){
        s = S.substr(0,i);
        e = S.substr(i);
        int x = stoi(s);
        int y = stoi(e);
        if( x%a==0 && y%b==0 ){
            cout << s+" "+e;
        }
    }
}