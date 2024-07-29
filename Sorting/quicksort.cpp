#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr, int low,int high ){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){

        while(arr[i] <=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }

        if(i<j)swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;

}
void quick_sort(vector<int> &arr,int low, int high){

    if(low<high){
        int p = partition(arr,low,high);
        
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }

}


int main()
{
    vector<int> arr={4,-1,7,3,2,1,6,5,10};
    int n = arr.size(); 
    quick_sort(arr, 0, n-1);
    for(auto x: arr) cout<<x<<" ";
    return 0;
}