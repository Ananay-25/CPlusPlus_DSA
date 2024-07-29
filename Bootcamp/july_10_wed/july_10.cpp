#include<bits/stdc++.h>
using namespace std;
void print_array(char arr[],int n){
    int cnt=0;

    for(int i=0;i<n;i++){

        if(isdigit(arr[i])){
            cnt++;
        }
        else{
            if(cnt>0){
                cout<<cnt;
                cnt=0;
            }
            else cout<<arr[i];
        }

    }
    if(cnt>0 )cout<<cnt;


}
void print_all_pattern(char arr[], int i,int n){
    if(i>= n){
        print_array( arr, n);
        // for(int i=0;i<n;i++)cout<<arr[i];
        cout<<"  ";
        return;
    }

    char temp=arr[i];
    print_all_pattern(arr,i+1,n);
    arr[i]='1';
    print_all_pattern(arr,i+1,n);
    arr[i]=temp;
}

// HOMEWORK :-  given N print truth table of N;

int main()
{   
    char arr[3]={'A','B','C'};
    print_all_pattern(arr,0,3);
    return 0;
}