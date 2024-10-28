#include<bits/stdc++.h>
using namespace std;


bool is_present(char c, string s){
    
    for(int i=0;i<s.length();i++){
        if(s[i]==c)return true;
    }
    return false;

}
int number_of_touches(string s){

    unordered_map<char,pair<int,string>> mpp={

        {'a',{1,"abc"}},
        {'b',{2,"abc"}},
        {'c',{3,"abc"}},
        
        {'d',{1,"def"}},
        {'e',{2,"def"}},
        {'f',{3,"def"}},
        
        {'g',{1,"ghi"}},
        {'h',{2,"ghi"}},
        {'i',{3,"ghi"}},
        
        {'j',{1,"jkl"}},
        {'k',{2,"jkl"}},
        {'l',{3,"jkl"}},
        
        {'m',{1,"mno"}},
        {'n',{2,"mno"}},
        {'o',{3,"mno"}},
        
        {'p',{1,"pqrs"}},
        {'q',{2,"pqrs"}},
        {'r',{3,"pqrs"}},
        {'s',{4,"pqrs"}},
        
        
        {'t',{1,"tuv"}},
        {'u',{2,"tuv"}},
        {'v',{3,"tuv"}},

        {'w',{1,"wxyz"}},
        {'x',{2,"wxyz"}},
        {'y',{3,"wxyz"}},
        {'z',{4,"wxyz"}}
    };
    int res=0;
    
    res+= mpp[s[0]].first;
    
    for(int i=1;i<s.length();i++){

        res+= mpp[s[i]].first;
        if(is_present(s[i-1],mpp[s[i]].second)) res++;
        
    }
    
    return res;
}

int main()
{
    string s="wxyz";
    cout<<number_of_touches(s);

    return 0;
}