#include<bits/stdc++.h>
using namespace std;
int sum_of_n(int n){
    if(n<1) return 0;
    return n+ sum_of_n(n-1);
    
}

void reverse_array(vector<int> &arr,int l,int h){
    if(l>=h) return;
    swap(arr[l],arr[h]);
    reverse_array(arr,l+1,h-1);
}

int main()
{   
    vector<int> arr={1,2,3,4,5};
    reverse_array(arr,0,arr.size()-1);
    for(auto x: arr) {
        cout<<x<<" ";
    }
    return 0;
}