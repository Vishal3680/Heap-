//Choose k array elements such that difference of maximum
// and minimum is minimized
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  arr[] = {10, 100, 300, 200, 1000, 20, 30};
    int k = 3;int ans=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int>s;
    for(auto x:arr){
        pq.push(x);
    }
    int i=0;
    while(k--){
        s.push(pq.top());
        pq.pop();
    }

   
    return 0;
}