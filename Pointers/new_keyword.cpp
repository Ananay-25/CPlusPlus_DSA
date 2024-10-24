#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int *p= new int; 
    /*
        Notes->   We allocated memmory in the heap area of the memory using new <type>, here new int, the new keyword 
        returns the address of the newly allocated memory block.
        We Store this address in the pointer p.

    */
    *p=20;        
    // Defereencing the pointer and assing the value int the memory block.
    cout<<p<<" "<<*p<<endl;

    delete p;
    /*
        The delete command free up the memory in the heap area . This does not delete the "p" pointer, it is 
        still in the stack area of the memory.

        Use of delete is to free up Garbage in the Heap. 

        DANGLING POINTER -> Now this pointer is not pointing to anything but it stores the memory address of 
        the previous memory which was allocated in the heap. Currently p is a dangling pointer and when we try to 
        derefernece this pointer we get a garbage value.

To avoid Dangling Pointer, after the deletion of memory on heap we can assign 
******* p = NULL  OR p = 0 ; **********
        
    */
    cout<<p<<" "<<*p;

    p = new int(10);

    /*
        We allocated a new memory in the heap and assign 10 in it and p is pointing to this block of memory.
    */

    return 0;
}