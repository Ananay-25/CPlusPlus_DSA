#include<bits/stdc++.h>
using namespace std;
void remove_duplicate_from_sorted_array(vector<int> &arr){
    int n= arr.size();

    int i=0;
    int j=0;

    while(j<n){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        j++;
    }
    cout<<i+1<<endl;


}
int main()
{
    vector<int> arr={1,1,2,3,4,4,4};
    remove_duplicate_from_sorted_array(arr);
    for(auto x: arr) cout<<x<<" ";
    return 0;
}