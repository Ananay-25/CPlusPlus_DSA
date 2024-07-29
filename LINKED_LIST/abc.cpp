#include <bits/stdc++.h> 
using namespace std;
int hotelBookings(vector<string> queries) {
    // Write your codes here.
    int count=0;
    for(auto x: queries) {
        char res=x[0];
        if(res== '+') count++;
    }
    cout<<count;
    return count;
}
int main(){
    vector<string> queries={ "+1A", "+3E", "-1A", "+4F", "+1A", "-3E"};
    hotelBookings(queries);
    
    return 0;
}