#include<bits/stdc++.h>
using namespace std;
void print_Set( set<vector<int>> st){

    for(auto x:st){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}
int main()
{   
    
    set<vector<int>> st;
    st.insert({1,2,3,4});
    st.insert({1,2,3,5});
    st.insert({1,2,3,4});

    // print_Set(st);
    vector<int> arr={1,2,2,3,246,26,73,73,4,347,3,57,34,7,5374,8,7,64,8,5,436,7,35,7,27,358,37,4,7846,837,78,687,35,864,735,8,7546,786,45375,76,735,4657436,7565,68473,5865,7375,657,7};
    cout<<arr.size();
    return 0;
}