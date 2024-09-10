#include<bits/stdc++.h>
using namespace std;

// Destructors are used to free up memory. It does not take any value nor does return any.

class simple{
    static int count;
public:
    simple(){ 
        count++;
        cout<<"Construnctor is called for object Number "<<count<<endl;
    }

    ~simple(){
        cout<<"Destructor is called for object Number "<<count<<endl;
        count--;
    }
};
int simple :: count=0;

int main()
{   
    simple a;
    {   
        cout<<"INSIDE BLOCK "<<endl;
        simple b,c;
    }
    cout<<"Outside the Block "<<endl;
    return 0;
}