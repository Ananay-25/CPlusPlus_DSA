#include<bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }

// };
// Node* Array2LL(vector<int> &arr)
// {
//     Node* head= new Node(arr[0]);
//     Node* mover=head;
//     for(int i=1;i<arr.size();i++){
//         Node*temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;

//     }
//     return head;    
// }
// void printLL(Node* head){
//     Node* temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// }

// Node* delete_alternate(Node *head){
//     if (head==NULL) return head;
//     Node* temp= head;
//     Node* bb;

//     while(temp->next && temp->next->next){
//         bb=temp->next->next;
//         temp->next=bb;
//         temp=bb;
//     }
//     temp->next=nullptr;

//     return head;


// }
vector<int> max_ele(vector<int> arr){
    int n= arr.size();
    vector<int> ans;
    ans.push_back(arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
        
    }
    return ans;
}

int main()
{
    // vector<int> arr={1,2,3};
    // Node * head=Array2LL(arr);
    // printLL(head);
    // cout<<endl;
    // Node *temp=delete_alternate(head);
    // printLL(temp);
    vector<int> arr={1,3,5,2,7,8,10,45,3,6};
    // vector<int> ans = max_ele(arr);
    for(auto x:  max_ele(arr)) cout<<x<<" d";
    return 0;
}