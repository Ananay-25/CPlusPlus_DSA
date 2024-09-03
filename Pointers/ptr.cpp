#include<bits/stdc++.h>
using namespace std;




int main()
{

    int a=5;
    int *b = &a;

    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;
    cout<<"value at a is "<<*b<<endl; // deferencing a pointer
    cout<<"value at a is "<<*&*b<<endl; // deferencing a pointer then we gwt 5 and &(5) is printed i.e, address of 5

    int **c= &b; // pointer to pointer stores address of a pointer
    cout<<c;


    // Array pointers

    int arr[20]={1,2,3,4,5,6,7,8};

    int *p = arr;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    cout<<++p<<endl;  //  pointers jumps +4 because p = p + 1*(size of datatype) => this points to next block of memory in array
    cout<<*p<<endl;




    return 0;
}