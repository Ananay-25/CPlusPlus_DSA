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
        Node*temp=new Node(arr[i]);
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
Node * delete_head(Node* head){
    if(head==NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node * removeTail(Node * head){
    if(head==NULL || head->next==NULL) return head;
    Node*temp=head;
    
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next=nullptr;
    delete temp->next;
    
    return head;
}
Node *delete_at_k(Node *head,int k){
    
    if(head==NULL) return head;
    if(k==1){ 
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    Node* prev=NULL;
    Node* temp=head;
    int count=1;
    while(temp){
        count++;
        
        
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node *delete_K_element(Node *head,int k){
    
    if(head==NULL) return head;
    if(head->data==k){ 
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    Node* prev=NULL;
    Node* temp=head;
    
    while(temp){
    
        
        if(temp->data==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr={16,4,4,5,6};

    Node *head=Array2LL(arr);
    cout<<"before"<<endl;
    
    printLL(head);    
    int k;
    cin>>k;
    // head= delete_head(head);
    head=delete_at_k(head,k);
    // head= removeTail(head);
    // head=delete_K_element(head,k);
    cout<<endl<<"after"<<endl;
    printLL(head);    
    
    return 0;
}