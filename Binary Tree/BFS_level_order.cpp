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

vector<vector<int>> level_order(TreeNode* root){
    vector<vector<int>>ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> l_ans;
        int size= q.size();
        for(int i=1;i<=size;i++){
            TreeNode* temp= q.front();
            q.pop();

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

            l_ans.push_back(temp->data);
        }
        ans.push_back(l_ans);

    }

    return ans;
}



int main()
{
    TreeNode* root=new TreeNode(1);
    root->left= new TreeNode(2);
    // root->left->left= new TreeNode(4);
    // root->left->right= new TreeNode(5);
    root->right= new TreeNode(3);                                                           
    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);

    for(auto x: level_order(root)) {
        for(auto y:x)cout<<y<<" ";
        cout<<endl;
        
    }
    return 0;
}