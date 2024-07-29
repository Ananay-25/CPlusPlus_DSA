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
int max_diameter=0;
int calculate_height(TreeNode* Node){

    if(Node==NULL) return 0;
    int lh =calculate_height(Node->left);
    int rh =calculate_height(Node->right);
    return 1+max(lh,rh);
}

void diameter_BT(TreeNode * root){
    if(!root) return ;

    int lh = calculate_height(root->left);
    int rh = calculate_height(root->right);

    max_diameter=max(max_diameter,lh+rh);

    diameter_BT(root->left);
    diameter_BT(root->right);


}



int Binary_tree_depth_way(TreeNode* root){

    if(!root) return 0;
    int lh =Binary_tree_depth_way(root->left);
    int rh =Binary_tree_depth_way(root->right);

    max_diameter=max(max_diameter,lh+rh);

    return 1+max(lh,rh);

}

/*                          1
                           / \
                          2   3
                         / \   
                        4   5
                             \
                              6
                               \
                                7                       */
int main()
{
    TreeNode* root = new TreeNode(1);                                                 
    root->left = new TreeNode(2);                                                     
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->right = new TreeNode(6);
    root->left->right->right->right = new TreeNode(7);
    
    // diameter_BT(root);
    max_diameter= Binary_tree_depth_way(root);
    cout<<max_diameter;
    return 0;
}