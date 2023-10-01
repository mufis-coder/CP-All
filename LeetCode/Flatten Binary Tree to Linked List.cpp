#include<iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void addToRight(TreeNode*& res, int in){
        TreeNode* temp = new TreeNode(in);
        if(res == NULL){
            res = temp;
        } else{
            TreeNode* curr = res;
            while(curr->right) curr = curr->right;
            curr->right = temp;
            curr->left = nullptr;
        }
    }

    void flattenFunc(TreeNode* root, TreeNode*& res){
        if(root != NULL){
            addToRight(res, root->val);
        }
        if(root != NULL && root->left){
            flattenFunc(root->left, res);
        } if(root != NULL && root->right){
            flattenFunc(root->right, res);
        }
    }

    void flatten(TreeNode* root) {
        TreeNode* res = nullptr;
        flattenFunc(root, res);
        
        if(root){
            root->left = nullptr;
            root->right = res->right;
        }
        root = nullptr;
    }
};