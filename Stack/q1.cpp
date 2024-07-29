#include<bits/stdc++.h>
using namespace std;

vector<int> choco(vector<int> &c)
{
    vector<int> res(c.size(),0);
    int j=0;
    for(int i=0;i<res.size();i++){
        if(c[i]!=0){
            res[j]=c[i];
            j++;
        }
    }
    return res;
}
int mul_of_char(string s){
    int res=1;
    for(int i=0;i<s.length();i++){
        res=res * (s[i]-'0');
    }
    return res;

}
bool divisible_by_three(string &s){
    int sum=0;
    for (auto x : s){
        sum=sum+ x-'0';

    }
    if (sum%3==0) return true;
    return false;

}
int main()
{  
    vector<int> c={1,0,4,2,0,1,0,1,4,13,0};
    vector<int> res= choco(c);
    // for(int x: res) cout<< x<<endl;
    string s="3635883959606670431112222";
    if(divisible_by_three(s)) cout<<"TRUE";
    else cout<<"FALSE";
    //cout<< mul_of_char(s);
    return 0;
}