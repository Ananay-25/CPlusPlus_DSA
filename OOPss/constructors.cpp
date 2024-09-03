#include<bits/stdc++.h>
using namespace std;

// constructors are special type of member functions which have the same name of class and are used to initialize 
// the objects of the class. it is automatically invoked the whenever object is created. No return type. 
// It should be declared in public secttion of the class.
// Two types Parameterized and default .

class point{
     int x_cordinate;
     int y_cordinate;
     friend void Difference_between_two_points( point p1, point p2);
     public:
     point(int a, int b){
        x_cordinate=a;
        y_cordinate=b;
     }

     void display_points(void){
        cout<<"X cordiante is "<<x_cordinate<<" and Y cordiante is "<<y_cordinate<<endl;
        
     }

};

void Difference_between_two_points( point p1, point p2){
     
     cout<< "Difference between their X Cordinates is "<<abs(p1.x_cordinate - p2.x_cordinate)<<endl;
     cout<< "Difference between their Y Cordinates is "<<abs(p1.y_cordinate - p2.y_cordinate)<<endl;

}


int main()
{
    point p1(74,13), p2(13,63);
    p1.display_points();
    p2.display_points();

    Difference_between_two_points(p1,p2);

    return 0;
}