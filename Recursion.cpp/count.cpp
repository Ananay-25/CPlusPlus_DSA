#include<bits/stdc++.h>
using namespace std;

void fxn(int cnt){

    if(cnt==4) return;

    fxn(cnt+1);
    cout<<cnt<<" ";

}
int main()
{
    fxn(0);
    return 0;
}