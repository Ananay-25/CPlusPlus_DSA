#include<bits/stdc++.h>
using namespace std;

class string_opr{
    private:
    string string_1;
    string string_2;

    unordered_set<char> st_1;
    unordered_set<char> st_2;
    unordered_set<char> st_one_plus_two;

    public:
    string_opr(string s1,string s2){
        string_1=s1;
        string_2=s2;
        for(int i=0;i<string_1.length();i++){
            st_1.insert(string_1[i]);
            st_one_plus_two.insert(string_1[i]);

        }
        for(int i=0;i<string_2.length();i++){
            st_2.insert(string_2[i]);
            st_one_plus_two.insert(string_2[i]);

        }
    }

    void print_union(){
        
        for(auto x: st_one_plus_two) cout<<x<<" ";
        cout<<endl;
    }

    void print_intersection(){
        
        for(auto x: st_1){
            if(st_2.find(x) != st_2.end()) cout<<x<<" ";
            else continue;
    }
    cout<<endl;
    }

    void print_s1_minus_s2(){
        for(auto x: st_1){
            if(st_2.find(x) != st_2.end()) continue;
            else cout<<x<<" ";
    }  
    cout<<endl;

    }

    void print_s2_minus_s1(){
        for(auto x: st_2){
            if(st_1.find(x) != st_1.end()) continue;
            else cout<<x<<" ";
        }
        cout<<endl;

    }


};

int main()
{
    string_opr obj1("RITHAMBARA","TECHNOLOGIES");
    obj1.print_union();
    obj1.print_intersection();
    obj1.print_s1_minus_s2();
    obj1.print_s2_minus_s1();
    return 0;
    
}