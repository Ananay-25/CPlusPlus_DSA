#include<bits/stdc++.h>
using namespace std;

class Calculator{
    int a;
    int b;

public:

    Calculator(float x, int y){
        a= int(x);
        b=y;
    }
    Calculator(int x,int y){
        a=x;
        b=y;
    }

    void ssum(void){
        cout<<a+b<<endl;
    }
};

int main()
{

    Calculator c(10,20), d( 10,2.7 );
    c.ssum();
    d.ssum();
    return 0;
}