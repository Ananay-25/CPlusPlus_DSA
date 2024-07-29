#include<bits/stdc++.h>
using namespace std;
class Attendance{
private:
    string name_of_student;
    int total_attendance=0;
public:
    Attendance(string name){
        name_of_student=name;
    }
    void Get_attendance(){
        cout<<total_attendance;
    }
    void present(){
        total_attendance++;
    }
    void absent(){
        total_attendance--;
    }
};

int main()
{   
    Attendance Satyam("Satyam");
    Satyam.present();    
    Satyam.present();    
    Satyam.present();  
    Satyam.absent();
    Satyam.Get_attendance();  
    return 0; 


}