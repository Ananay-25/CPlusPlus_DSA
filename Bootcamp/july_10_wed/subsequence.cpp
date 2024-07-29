#include<bits/stdc++.h>
using namespace std;
void print_all_subsequence(vector<char> arr,int i, vector<char>&ss){
    if(i>=arr.size()){
        for(auto x: ss) cout<<x;
        cout<<" ";
        return;
    }
    ss.push_back(arr[i]);
    print_all_subsequence(arr,i+1,ss);

    ss.erase(ss.begin()+i); // use ss.pop_back();
    print_all_subsequence(arr,i+1,ss);


}
void print_ss_sum_k(vector<int> arr,int i, vector<int> ss,int k,int sum){

    if(i>=arr.size()){
        if(sum==k){
            for(auto x : ss){
                cout<<x<<" ";
        }
        cout<<endl;
        }
        return;
    }
    ss.push_back(arr[i]);
    sum+=arr[i];
    print_ss_sum_k(arr,i+1,ss,k,sum);

    ss.erase(ss.begin()+i);// use ss.pop_back();
    sum-=arr[i];
    print_ss_sum_k(arr,i+1,ss,k,sum);

}


bool print_only_one_ss_sum_k(vector<int> arr,int i, vector<int> ss,int k,int sum){
    
    if(i>=arr.size()){
        if(sum==k){
            for(auto x:ss) cout<<x<<" ";
            return true;
        }
        return false;
    }

    ss.push_back(arr[i]);
    sum+=arr[i];
    if(print_only_one_ss_sum_k(arr,i+1,ss,k,sum)) return true;

    ss.pop_back();
    sum-=arr[i];
    if(print_only_one_ss_sum_k(arr,i+1,ss,k,sum))return true;

    return false;


}   

int print_total_no_ss_sumk(vector<int> arr,int i, int sum,int k){

    if(i>=arr.size()){
        if(sum==k) return 1;
        return 0;
    }

    sum+=arr[i];
    int l= print_total_no_ss_sumk(arr,i+1,sum,k);
    sum-=arr[i];
    int r= print_total_no_ss_sumk(arr,i+1,sum,k);

    return l+r;
}

int main()
{
    // vector<char> arr={'A','B','C'};
    // vector<char> ss={};
    // print_all_subsequence(arr,0,ss);
    vector<int> ss={};
    vector<int> arr={1,2,3,4};
    // print_ss_sum_k(arr,0,ss,4,0);
    // print_only_one_ss_sum_k(arr,0,ss,5,0);

    cout<< print_total_no_ss_sumk(arr,0,0,11);

    return 0;
}