#include<bits/stdc++.h>
using namespace std;

void rotate_an_array(vector<int> &arr,int k){
    vector<int> temp;
    
    int n=arr.size();
    k=k%n;
    for(int i=k;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}

void reverse_array(vector<int> &arr, int low, int high){
    int i=low,j=high;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void rotate_optimal(vector<int> &arr ,int k){
        int n=arr.size();
        k=k%n;

        reverse_array(arr,n-k,n-1);
        reverse_array(arr,0,n-k-1);
        reverse_array(arr,0,n-1);

}

int main()
{

    vector<int> arr={1,2,3,4,5,6,7};
    rotate_optimal(arr,3);
    for(auto x:arr) cout<<x<<" ";
    return 0;

}