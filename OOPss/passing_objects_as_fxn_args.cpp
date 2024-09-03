#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a;
    int b;
public:
    
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void get_number(void){
        cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;

    }

    void add_two_numbres(Complex o1,Complex o2){
        a= o1.a +o2.a;
        b= o1.b +o2.b;

        cout<< "Sum of Two complex number is : "<<a<<"+"<<b<<"i"<<endl;

    }
};
int main()
{
    Complex o1,o2,o3;

    o1.set_data(1,2);
    o2.set_data(3,4);
    o1.get_number();
    o2.get_number();
    o3.add_two_numbres(o1,o2);
      

    return 0;
}