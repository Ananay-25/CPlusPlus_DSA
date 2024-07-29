#include<bits/stdc++.h>
using namespace std;
void rotateleft(int arr[],int n,int k){

    if (k==0) return ;

    k=k%n;

    if(k>n) return;

    int temp[n];
    int j=0;
    for(int i=k;i<n;i++){
        temp[j] = arr[i]; 
        j++;
    }
    for(int i=0;i<k;i++){
        temp[n-k+i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

 

}
int main()
{
    // cout<<alice_fav_playlist("abcdacarda",4);
    int arr[5]={1,2,3,4,5};
    rotateleft(arr,5,2);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";

    return 0;
}