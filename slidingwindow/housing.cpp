// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 


void housing(int a[],int n,int k){
    int i=0;
    int j=0;
    int cs=0;
    // map<pair<int,int>,int> m;
    vector<vector<int>> v;
    vector<int> m;
    vector<int> freq;
    
    while(j<n){
        cs = cs + a[j];
        j++;
        
        while(cs > k && i<j){
            cs-=a[i];
            i++;
        }
        
        if(cs == k){
            m.clear();
            m.push_back(i);
            m.push_back(j-1);
            v.push_back(m);
            freq.push_back((j-1)-i+1);
            cout << i << "-" << j-1 << endl;
        }
    }
    
    
    int min = freq[0];
    for(int m : freq){
        if(m<min){
            min=m;
        }
    }
    
    cout << "--";
    
    int minidx = find(freq.begin(),freq.end(),min)-freq.begin();
    cout << v[minidx][0] << " " << v[minidx][1];
}



int main() {
    int a[] = {1,3,2,1,4,1,3,2,1,1,2,4};
    int n = sizeof(a)/sizeof(int);
    int k = 8;
    housing(a,n,k);
}