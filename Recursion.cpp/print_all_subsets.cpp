#include<bits/stdc++.h>
using namespace std;

void add_subset(vector<int> arr, int i, int n, vector<vector<int>> &ans, vector<int> &temp){


    if(i>= n){
        ans.push_back(temp);
        return ;
    }

    temp.push_back(arr[i]);
    add_subset(arr,i+1,n,ans,temp);

    temp.pop_back();
    add_subset(arr,i+1,n,ans,temp);


}

vector<vector<int> > subsetsss(vector<int> arr){

    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> temp;
    add_subset(arr,0,n,ans,temp);
    
    return ans;

}

int main()
{
    vector<int> arr= {1,2,3};
    vector<vector<int>> ans=subsetsss(arr);
    for(auto x: ans){
        for(auto y : x) cout<< y<<" ";
        cout<<endl;
    }
    return 0;
}