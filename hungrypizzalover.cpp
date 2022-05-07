// Dominos Pizza has hungry customers waiting in the queue. Each unique order is placed by a customer at time x[i], and the order takes y[i] units of time to complete.
// You have information on all n orders, Find the order in which all customers will receive their pizza and return it. If two or more orders are completed at the same time then sort them by non-decreasing order number.



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a = {{4,1}, {6,2}, {7,6}, 
                       {8,1}, {1,3}};
    int n=a.size();
    vector<int> ans;
    vector<pair<int, int>> pr;
    
    //finding the time at which all the orders was complited
    for(int i=0;i<n;i++){
        int sum = a[i][0]+a[i][1];
        pr.push_back(make_pair(sum,i+1));
    }
    
    // sorting the pairs on the basis of time taken
    sort(pr.begin(),pr.end());
    

    //extracting the first index of sorted item in an pair
    for(pair<int,int> k:pr){
        ans.push_back(k.second);
    }
    
    //printing the result
    for(int l:ans){
        cout << l << " ";
    }
}