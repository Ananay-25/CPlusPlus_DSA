#include<bits/stdc++.h>
using namespace std;
class Calculator{
    int a;
    int b;
    int c;
public:
    // if i arguements of constructor are not provided it will bw set to the default value given by the developer 
    // in the constructors. It can also be applied to the the fxns.
    Calculator(int x, int y=400, int z=0){
        a=x;
        b=y;
        c=z;

    }

    void print_data(){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }

};


int main()
{
    Calculator a(1),b(1,2,4),c(3,4);
    a.print_data();
    b.print_data();
    c.print_data();


    return  0;
}