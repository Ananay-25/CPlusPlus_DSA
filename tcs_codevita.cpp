#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int k;
    cin>>k;
    priority_queue<int> qq;

    for(int i=0;i<n;i++){

        int x;
        cin>>x;

        qq.push(x);

    }

    for(int i=1;i<=k;i++){

        int x= qq.top();
        qq.pop();
        cout<<"ffff "<<x<<endl;
        x=x/2;
        qq.push(x);

    }
    int sum=0;
    while(!qq.empty()){

        sum+=qq.top();
        qq.pop();
    }

    cout<<sum;


    return 0;
}