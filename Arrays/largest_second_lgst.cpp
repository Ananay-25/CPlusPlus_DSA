#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> arr){
    int max= INT_MIN;
    for(auto x:arr){
        if(x>max) max=x;
    }
    return max;
}
int minimum(vector<int> arr){
    int min= INT_MAX;
    for(auto x:arr){
        if(x<min) min=x;
    }
    return min;
}
int second_largest(vector<int> arr){
    int first_max=INT_MIN;
    int second_max=INT_MIN;

    for(auto x: arr) {
        if(x>first_max) first_max=x;
    }

    for(auto x:arr){
        if( x > second_max && x !=first_max ) second_max=x;
    }
    return second_max;
}


int main()
{
    vector<int> arr={1,2,4,3,99999,0,0,0,0};
    cout<<largest(arr)<<endl;
    cout<<minimum(arr)<<endl;
    cout<<second_largest(arr)<<endl;

    return 0;
}