#include<bits/stdc++.h>
using namespace std;

class Employee{

    int emp_id;
    int emp_salary;

    static int count;  // default value of static variable is 0 **initializing value of count here is not possible** 
public:
    static void get_count_of_employees(void){               //  static methods can only access static members of the class
        cout<<"Numbers of Employees are: "<<count<<endl;
    }
    void setId(int id, int salary);
    void getdata(void);

};

int Employee :: count;  // here we can initialize the count  

void Employee :: setId(int id, int salary){
    emp_id=id;
    emp_salary=salary;
    count++;
}

void Employee :: getdata(void){
    cout<<" The Id of Employee is "<<emp_id<<" and its salary is "<<emp_salary<<endl;
}


int main()
{

    Employee guddu, dubey, miner, anni;

    guddu.setId(111,111111);
    guddu.getdata();

    dubey.setId(112,222222);
    dubey.getdata();

    miner.setId(113,333333);
    miner.getdata();

    anni.setId(114,444444);
    anni.getdata();

    Employee::get_count_of_employees();



    return 0;
}