#include<bits/stdc++.h>
using namespace std;

int BS(vector<int> &arr, int target,int low,int high){
    if(low>high) return -1;
    int mid= low+(high-low)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target) return BS(arr,target,low,mid-1);
    else return BS(arr,target,mid+1,high);
    
}
int main()
{
    vector<int> arr= {1,4,7,16,19,27,37,88,90,91,106};
    for(auto x: arr) cout<<x<<" ";
    cout<<endl;
    int target ;
    cin>>target;
    cout<<endl;
    int n= arr.size();
    cout<<BS(arr,target,0,n-1);
    return 0;
}