#include<bits/stdc++.h>
using namespace std;
class Complex{

    int a;
    int b;

public:
    
    friend Complex add_two_numbers(Complex o1,Complex o2);
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void get_number(void){
        cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex add_two_numbers(Complex o1,Complex o2){

       Complex o3;
       o3.set_data((o1.a+o2.a),(o1.b+o2.b));    
       return o3;

}

int main()
{
    Complex o1,o2,o3;

    o1.set_data(1,2);
    o2.set_data(3,4);

    o3 = add_two_numbers(o1,o2);
    o3.get_number();


    return 0;
}