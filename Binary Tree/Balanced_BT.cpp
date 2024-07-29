#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data=val;
        left=right=NULL;
    }

};


// Balanced Binary Tree states that , for every node (height of LST - Height of RST) <=1

// T.C of Below is N**2;
int calculateheight(TreeNode* Node){

    if(Node==NULL) return 0;
    int lh =calculateheight(Node->left);
    int rh =calculateheight(Node->right);
    return 1+max(lh,rh);
}
bool balanced_BT(TreeNode * root){
    if(root==NULL) return true;

    int lh = calculateheight(root->left);
    int rh =calculateheight(root->right);

    if(abs(lh-rh)>1) return false;

    if(balanced_BT(root->left) && balanced_BT(root->right)) return true;
    return false;

}


// T.C of below is N;
int check(TreeNode* root){
    if(root==NULL )return 0;

    int lh = check(root->left);
        if(lh==-1) return -1;
    int rh= check(root->right)  ;
        if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;

    return 1+max(lh,rh);

}
int main()
{
    TreeNode* root=new TreeNode(1);
    root->left= new TreeNode(2);
    root->left->left= new TreeNode(4);
    // root->left->right= new TreeNode(5);
    root->right= new TreeNode(3);                                                           
    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);
    
    root->right->right->right = new TreeNode(10);
    if (balanced_BT(root)) cout<< 1;
    else cout<<0;
    return 0;
}