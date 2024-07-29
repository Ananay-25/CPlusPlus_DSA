#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max_count=0;

        for(auto x:nums){
            if(x==1) {
                count++;
                if(count> max_count) max_count=count;
            }
            else count=0;
        }
        return max_count;
}
int main()
{
    vector<int> arr={1,0,0,0,1,1,1,0,1,1};
    cout<<findMaxConsecutiveOnes(arr);
    
    return 0;
}