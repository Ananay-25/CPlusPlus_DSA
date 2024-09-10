#include<bits/stdc++.h>
using namespace std;

// Lower bound -> is the smallest index where arr[index] >= x .


int lower_bound(vector<int>arr , int x){
    int ans= arr.size();
    int l=0, h=ans-1;
    int mid;
    while(l<=h){

        mid=l+(h-l)/2;

        if(arr[mid]>=x){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;

    }
    return ans;

}

// Upper Bound -> is the smallest index where arr[index] > x . 

int upper_bound(vector<int>arr , int x){
    int ans= arr.size();
    int l=0, h=ans-1;
    int mid;
    while(l<=h){

        mid=l+(h-l)/2;

        if(arr[mid]>x){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;

    }
    return ans;
}

//  Seacrh in an sorted array for X ->
//          1) if x is present then return the index
//          2) if not then return the index where the x shuold be inserted such that it maintains a sorted order.
// This problem can be restated as a lower bound problem where we need return minimum index of array where the x 
// should be inserted.

int search_and_insert(vector<int> arr, int x){

    int ans= arr.size();
    int l=0, h=ans-1;
    int mid;
    while(l<=h){

        mid=l+(h-l)/2;

        if(arr[mid]>x){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;

    }
    return ans; 

}


int main()
{

    vector<int> arr{1,4,5,6,6,9,10,11,11,12};
    cout<<lower_bound(arr,11)<<endl;
    
    // STL function -> 
    vector<int> :: iterator lb ,ub;
    lb= lower_bound(arr.begin(),arr.end(),11);
    cout<<lb-arr.begin()<<endl;

    cout<<upper_bound(arr,11)<<endl;

    //STL function ->
    ub= upper_bound(arr.begin(),arr.end(),11);
    cout<<ub-arr.begin()<<endl;

    cout<<search_and_insert(arr,7)<<endl;
    
    return 0;
}