#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {

        int x_or=0;
        for(auto x: nums) x_or=x_or^x;
        return x_or;

}
int main()
{
    vector<int> arr={1,1,0,0,3,2,2,5,3};
    cout<<singleNumber(arr);
    return 0;
}