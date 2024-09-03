#include<bits/stdc++.h>
using namespace std;

void print_set_bits(int arr[],int n){

    for(int i=0;i<n;i++){
        int count=0;
        while(arr[i]!=0){
            if(arr[i]&1==1) count++;
            arr[i]>>1;
        }
        cout<<count<<endl;

    }

}



int main()
{
    int n;
    cin>>n;
    cout<<endl;
    int nums[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums[i]=x;
        cout<<endl;
    }
    print_set_bits(nums,n);
    return 0;
}