#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int l,int h,int val){
    

    int mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]== val) return mid;
        else if(arr[mid]>val){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    
    return -1;

}






int main()
{

    vector<int> arr={1,2,3,4,5,6};
    cout<<binary_search(arr,0,arr.size()-1,5);
    return 0;

}