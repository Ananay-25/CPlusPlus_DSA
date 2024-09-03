#include<bits/stdc++.h>
using namespace std;

// Return an Subarray from an array where the sum is max;

int brute_force(vector<int> &arr, int k){
    int len=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) len= max(len,j-i+1);
            
            }
        }

    return len;
    }




int main()
{
    vector<int> arr={1,2,3,1,0,2,4,};
    cout<<brute_force(arr, 3);
    return 0;
}