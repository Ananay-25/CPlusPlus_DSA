#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<char> arr={'A','f','B','a','F','b'};
    sort(arr.begin(),arr.end());
    for(auto x: arr) cout<<x<<"  ";
    return 0;
}