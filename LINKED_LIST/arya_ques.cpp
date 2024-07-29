#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> list1={"A","app","a","d","ke","th","doc","awa"};
    vector<string> list2={"y","tor","e","eps","ay","","le","n"};
    string res="";
    int n=list1.size();
    for(int i=0;i<n;i++){
        res=res+list1[i]+list2[n-i-1]+" ";
        
    }
    cout<<res;
    return 0;
}