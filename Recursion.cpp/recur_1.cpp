#include<bits/stdc++.h>
using namespace std;

void print_names_k_times(string name, int k){
    if(k<=0) return;
    cout<<name<<endl;
    print_names_k_times(name,k-1);
}

void print_from_one_to_n(int n,int i){
    if(i<1) return;
    print_from_one_to_n(n,i-1);
    cout<<i; 
}
void print_from_n_to_one(int n,int i){
    if(i>n) return;
    print_from_n_to_one(n,i+1);
    cout<<i;
}

int main()
{
    // print_names_k_times("abc",5);
    // print_from_one_to_n(5,5); 
    print_from_n_to_one(5,1); 
    
    return 0;
}