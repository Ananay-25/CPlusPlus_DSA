#include<bits/stdc++.h>
using namespace std;

void gpair (vector<int> arr){
    map<int,int> mpp;

    for(int i=0;i<arr.size();i++){
        if(mpp.find(arr[i])!= mpp.end() ){
            cout<<mpp.at(arr[i])<<" "<<i<<endl;
        }
        else{
            mpp[arr[i]] = i;
        }
    }
}
int main()
{   
    
    vector<int>arr = {1,2,1,4};
    gpair(arr);
    return 0;
}