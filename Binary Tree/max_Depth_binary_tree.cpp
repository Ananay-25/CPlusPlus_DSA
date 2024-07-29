#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=right=NULL;   
    }
};

int depth_bt(TreeNode* root){

    if(root==NULL) return 0;
    int lh=depth_bt(root->left);
    int rh=depth_bt(root->right);

    return 1+ max(lh,rh);
}
int main()
{
    TreeNode* root=new TreeNode(1);
    root->left= new TreeNode(2);
    // root->left->left= new TreeNode(4);
    // root->left->right= new TreeNode(5);
    root->right= new TreeNode(3);                                                           
    // root->right->left= new TreeNode(6);
    // root->right->right= new TreeNode(7);
    cout<<depth_bt(root);
    return 0;
}