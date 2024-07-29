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


void print_preorder_vector(TreeNode* root, vector<int> &ans){

    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    print_preorder_vector(root->left,ans);    
    print_preorder_vector(root->right,ans);
        

}
vector<int> print_preorder( TreeNode* root){
    vector<int> ans;
    print_preorder_vector(root, ans) ;
    return ans;
}


void inorder(TreeNode* root,vector<int>&ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
    

}
vector<int> inorder_traveral(TreeNode* root){

    vector<int> ans;
    inorder(root,ans);
    return ans;
}

void postorder(TreeNode* root,vector<int>&ans){
    if(!root) return;
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->data);
    

}
vector<int> postorder_traveral(TreeNode* root){

    vector<int> ans;
    postorder(root,ans);
    return ans;
}


int main()
{
    TreeNode* root=new TreeNode(1);
    root->left= new TreeNode(2);
    root->left->left= new TreeNode(4);
    root->left->right= new TreeNode(5);
    root->right= new TreeNode(3);
    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);


    vector<int> ans=postorder_traveral(root);
    for(auto x: ans) cout<<x<<endl;
    return 0;
}