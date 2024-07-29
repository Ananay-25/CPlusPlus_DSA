#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){

    for (int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j] <arr[j-1]){

            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}

int main()
{
    int n=7;
    int arr[n]={7,9,56,2,10,11,4};
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}