#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(vector<int> arr,int k){
    int n=arr.size();
    int max_sum=0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }

    int start=0;
    int end=k;
    int current_sum=max_sum;
    while(end<n){
        current_sum-= arr[start]-arr[end];
        start++; end++;

        if(current_sum>max_sum) max_sum=current_sum;
    }
    return max_sum;
}

int main()
{
    vector<int> arr={1,2,3,4};
    int max_sum= max_sum_subarray(arr,2);
    cout<<max_sum;
    return 0;
}