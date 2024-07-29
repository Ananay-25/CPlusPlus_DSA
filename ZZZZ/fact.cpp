#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n<=0) return 1;
    return n*fact(n-1);
}

long long nCr(int n,int r){
    return fact(n)/ (fact(r)* fact(n-r));
}

int main()
{

    // cout<<nCr(2,2);
    cout<< fact(30);
    return 0;
}