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

Node* Array2LL(vector<int> &arr)
{
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;

        
    }
    return head;

}
void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int SearchLL(Node* head, int val){
    Node* temp= head;
    while(temp){
        if(val==temp->data) return 1;
        temp=temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6};
    // Node x=Node(ar[0],nullptr);
    // Node *y=&x;
    // Node* y=new Node(ar[0]);
    // cout<<y->data<<" "<<y->next;

    Node* head= Array2LL(arr);
    int val;
    cin>>val;
    int res=SearchLL(head,val);
    cout<<res;
    // printLL(head);
    return 0;
}