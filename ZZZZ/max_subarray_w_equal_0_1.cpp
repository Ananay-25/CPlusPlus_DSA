#include<bits/stdc++.h>
using namespace std;

int length_max_subarray(vector<int> arr){

    int max_len=0;
    int n=arr.size();

    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){

            int count0=0;
            int count1=0;
            for(int z=i;z<=j;z++){
                if(arr[z]==1) count1++;
                else count0++;
            }
            int len=j-i+1;
            if(count0== count1 && len>=max_len){
                max_len=len;
            }

        }
    }
    return max_len;


}

int main()
{
    vector<int> arr={0,0,0,1};
    cout<<length_max_subarray(arr);
    return 0;
}