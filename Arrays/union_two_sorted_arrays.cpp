#include<bits/stdc++.h>
using namespace std;

vector<int> union_of_two_sorted_arrays(vector<int> arr1,vector<int> arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0,j=0;

    vector<int> ans;
    

    while(i<n1 && j<n2){

        if(arr1[i]<=arr2[j] ){
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;            
        }


    }

    while(i<n1){

        if(ans.size()==0 || ans.back()!=arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }      

    while(j<n2){

        if(ans.size()==0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
         j++;
    }      
    
    return ans;


}
int main()
{

    vector<int> arr1={1,1,2,3,4,};
    vector<int> arr2={2,3,5,9,10};
    vector<int> ans=union_of_two_sorted_arrays(arr1,arr2);

    for(auto x:ans) cout<<x<<" ";
    return 0;
}