#include<bits/stdc++.h>
using namespace std;

void print_per(vector<int> & arr, int i,set<vector<int>>& st ){
    if(i>=arr.size()){
        if(st.find(arr)!=st.end()){
            return ;
        } 
        else{
            st.insert(arr);
            for(auto x:arr) cout<<x<<" ";
            cout<<endl;
            return;
        }
    }

    for(int j=i;j<arr.size();j++){
        swap(arr[i],arr[j]);
        print_per(arr,i+1,st);
        swap(arr[i],arr[j]);
    } 
}

int main()
{   

    vector<int> arr={1,2,3};
    set<vector<int>> st;
    print_per(arr,0,st);
    return 0;

}