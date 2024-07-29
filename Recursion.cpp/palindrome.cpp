#include<bits/stdc++.h>
using namespace std;
bool ispalinfrome(string s, int left,int right){
    if(left>right)return true;
    if(s[left]!=s[right]) return false;
    return ispalinfrome(s,left+1,right-1);
}
int main()
{
    //string s="racecar";
    //if(ispalinfrome(s,0,s.length()-1)) cout<<"TRUE";
    //else cout<<"FALSE"; 
    return 0;
}