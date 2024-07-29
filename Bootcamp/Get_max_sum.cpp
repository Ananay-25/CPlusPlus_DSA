#include<bits/stdc++.h>
using namespace std;
int get_max_sum(vector<int> arr,int i){
    if (i>= arr.size()-1) return arr[i];

    int x= arr[i]+ get_max_sum(arr,i+2);
    int y= get_max_sum(arr,i+1);

    return max(x,y);
}
int main()
{
    vector<int> arr={4,1,3,7,1,9};
    cout<<get_max_sum(arr,0);
    // cout<<"jsd";
    return 0;
}