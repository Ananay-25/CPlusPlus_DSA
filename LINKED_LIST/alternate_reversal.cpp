#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Array2LL(vector<int> &arr){
    Node*head =new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse_LL(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* aage=NULL;

    while(curr){
        aage=curr->next;
        curr->next=prev;
        prev=curr; 
        curr=aage;
    }
    return prev;
}

Node* alternate_reversal(Node* head){

    



}

int main()
{
    vector<int> arr={ 1,2,3,4,5,6,7,8,9,10};
    Node* head=Array2LL(arr);
    printLL(head);


    return 0;
}