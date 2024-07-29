#include<bits/stdc++.h>
using namespace std;
void sm (int x){
    if(x==0) return ;
    int res=0;
    for(int i=1;i<=x;i++){
        int temp=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0) {
                temp=temp+ j;
                cout<<" for "<<i<<" : "<<j<<endl;
                if(j!= i/j){
                    temp+= i/j;
                cout<<" for "<<i<<" : "<<i/j<<endl;
                }
            }
         }
        res=res+temp;
    }
    cout<<"final "<<res;

}
int main()
{
    sm(1232314);
    return 0;
}