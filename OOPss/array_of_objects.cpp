#include<bits/stdc++.h>
using namespace std;

class Vehicle{

    
    string name_of_vehicle;
    int number_of_wheels;

public:
    void set_Vehicle(string name, int now){
        name_of_vehicle=name;
        number_of_wheels=now;
    }

    void get_vehicle(void){
        cout<<"The Vehicle is : "<<name_of_vehicle<<" and it has "<<number_of_wheels<<" wheels."<<endl;
    }

};

int main()
{
    Vehicle v[100];
    for(int i=0;i<4;i++){
        cout<<"Enter name of your vehicle "<<endl;
        string name;
        cin>>name;

        cout<<"Enter number of wheels" <<endl;
        int now;
        cin>> now;

        v[i].set_Vehicle(name,now);
    }

    for(int i=0;i<4;i++){

        v[i].get_vehicle();

    }
    return 0;
}