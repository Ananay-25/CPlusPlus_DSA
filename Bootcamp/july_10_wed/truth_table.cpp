#include<bits/stdc++.h>
using namespace std;
void truth_table( string str, int n, int i){
    if(i>=n){
        for(int i=0;i<n;i++) cout<<str[i];
        cout<<endl;
        return;
    }
    str.push_back('0');
    truth_table(str,n,i+1);
    str.erase(i);
    str.push_back('1');
    truth_table(str,n,i+1);
    

}
int main()
{
    string str="";
    truth_table(str,4,0);
    return 0;
}