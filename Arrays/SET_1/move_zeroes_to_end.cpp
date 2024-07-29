#include<bits/stdc++.h>
using namespace std;
void move_zeroes_to_end(vector<int> &arr){
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) return;

    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> arr={1,0,3,4,5,6,7};
    move_zeroes_to_end(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}