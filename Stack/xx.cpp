#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,4};
   
        int mul=1;
        for(auto x:nums){
            mul=mul*x;
        }
        vector<int> res(nums.size(),mul);
        for(auto x:res){
            cout<<x<<endl;
        }
    return 0;
}