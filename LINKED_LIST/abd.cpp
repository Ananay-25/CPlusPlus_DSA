#include<bits/stdc++.h>
using namespace std;
string rooom(string s){
    stack<char> st;
    string rev="";
    st.push(s[0]);
    
    int i=1;
    while(i<s.length()){
        if(st.empty()) st.push(s[i]);      
        else if (st.top()==s[i]) st.pop();
        else{
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        rev+=st.top();
        st.pop();
    }
    reverse(rev.begin(),rev.end()); 
    return rev;
}
int main()
{
    string s="xxzxxxyy";
    string str= rooom(s);
    cout<<str<<endl;
    cout<<s;
    return 0;
}