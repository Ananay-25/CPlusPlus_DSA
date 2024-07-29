#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }

    
    public:
    Node(int data1 ){
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
Node* Inserion_at_head(Node* head){
    if(head==NULL) return new Node(3);
    Node*temp=new Node(3);
    temp->next=head;
    return temp;
}
Node * Inserion_at_tail(Node *head){
    // if(head==NULL) return new Node(val)
    Node* val=new Node(3);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=val;
    return head;
}
Node* insertion_at_given_pos(Node *head,int k,int el){
    if(head==NULL){
        if(k==1) return new Node(el);
        else return NULL;
    }
    if(k==1){
        Node *val=new Node(el,head);
        return val;
    }
    int c=0;
    Node *temp=head;
    while(temp){
        c++;
        if(c==k-1){
            Node *val=new Node(el,temp->next);
            temp->next=val;
            break;
        }
        temp=temp->next;
    }
    return head;


}

Node* reverse_LL(Node* head){

    Node* prev=NULL;
    Node* curr=head;
    Node* ahead=NULL;

    while(curr){
        ahead=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ahead;
        
    }
    return prev;
    
}

int main()
{
    vector<int> arr={ 1,2,3,4,5,6};
    Node*head=Array2LL(arr);
    cout<<"LL Before"<<endl;
    printLL(head); 

    // head=Inserion_at_tail(head);
    // cout<<"LL After"<<endl;
    // printLL(head);

    //head=insertion_at_given_pos(head,1,100);
    //printLL(head);
    cout<<"LL reverse"<<endl;
    Node*head1 =reverse_LL(head);
    printLL(head1);

    

    

    return 0;
}