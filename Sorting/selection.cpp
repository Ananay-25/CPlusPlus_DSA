#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1 ;i++){

        
        int min_index= i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
               
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

}
int main()
{
    int n=7;
    int arr[n]={7,9,56,2,10,11,4};
    selection_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
