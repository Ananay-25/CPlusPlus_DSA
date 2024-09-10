#include<bits/stdc++.h>
using namespace std;

struct TreeNode{

    int val;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
    TreeNode(){}

};

void Level_order_transversal(TreeNode* root){

    TreeNode* node= new TreeNode;
    node=root;
    queue<TreeNode*> qq;
    qq.push(node);

    while (!qq.empty())
    {
        TreeNode* temp=qq.front();
        
        cout<<temp->val<<" ";
        qq.pop();

        if(temp->left) qq.push(temp->left);
        if(temp->right) qq.push(temp->right);


    }
}






int main()
{
    TreeNode* root=new TreeNode(1);
    root->left= new TreeNode(2);
    root->left->left= new TreeNode(4);
    
    root->right= new TreeNode(3);                                                           
    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);
    
    root->right->right->right = new TreeNode(10);
    Level_order_transversal(root);

    return 0;
}