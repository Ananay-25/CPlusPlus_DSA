#include<bits/stdc++.h>
using namespace std;
vector<int> dupli_detect(vector<int> arr){
    map<int,int> mpp;
    for(auto x: arr) mpp[x]++;

    vector<int> res;
    for(auto it: mpp){
        if(it.second>1) {
            res.push_back(it.first);
        }
    }
    return res;

}


int main()
{

    vector<int> arr={1,1,1,3,4,21,3,4,6774,56,3,21};
    vector<int> res= dupli_detect(arr);

    for(auto x: res) cout<<x<<endl;
    return 0;
}