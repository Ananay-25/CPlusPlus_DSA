#include<bits/stdc++.h>
using namespace std;

void print_substring(string str,int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j+=2){
            cout<<j;

            cout<<endl;

           
        }
        
    }
}

int main()
{   
    print_substring("512304",5);
    return 0;
}