#include<bits/stdc++.h>
using namespace std;
void fxn(string str , int i){
    if(i== str.length()) return ;

    fxn(str, i+1);
    cout<<str[i];

}
int main()
{
    string s="abaattteewfefw";
    fxn(s,0);
    return 0;
}
