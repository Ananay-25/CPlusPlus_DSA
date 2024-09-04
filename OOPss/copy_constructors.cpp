#include<bits/stdc++.h>
using namespace std;

class Number{
    int num;
public:
    Number(){ num = 0; }
    Number(int x){
        num=x;
    }
    Number(Number &obj);
    void display(void);
};

Number ::Number(Number &obj){                   // If this contructor is removed then also the program will work because
    cout<<"Copy constructor called "<<endl;     // c++ compiler has its own copy contructor
    num=obj.num;
}
void Number:: display(void){
    cout<<"Value in the object is "<<num<<endl;
}

int main()
{
    Number a,b,c(4);
    a.display();
    b.display();
    c.display();


    Number x(c); //Copy contructor invoked
    x.display();

    Number y; //Copy contructor not invoked
    y=c;
    y.display();


    Number z=c; //Copy contructor invoked
    z.display();
    return 0;
}