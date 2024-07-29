#include<bits/stdc++.h>
using namespace std;
bool isdefeated(vector<int> pow,vector<int> bonus,int n, int ex){
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[pow[i]]=bonus[i];
    }
    for(auto x:mpp){
        if(ex<x.first) return false;
        ex+=x.second;
    }
    return true;
}
 
int main()

{


    return 0;
}