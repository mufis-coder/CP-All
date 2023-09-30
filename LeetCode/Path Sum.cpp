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
    void findSums(TreeNode* node, int targetSum, int sum, bool& res){
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;
        
        sum += node->val;
        if(sum == targetSum && 
            node->left == NULL && node->right==NULL) res = true;

        if(node->left) {
            left = node->left;
            findSums(left, targetSum, sum, res);
        }
        if(node->right) {
            right = node->right;
            findSums(right, targetSum, sum, res);
        }

        if(left == NULL && right == NULL) return;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;        
        bool res = false;
        findSums(root, targetSum, 0, res);
        return res;
    }
};