/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        void construct(TreeNode* root,string &ans) {
        if(root) {
            ans+='(';
            string s = to_string(root->val);
            ans+=s;
            if(!root->left && root->right){
                ans+='(';
                construct(root->left,ans);
                ans+=')';
            } else if(root->left) {
                construct(root->left,ans);
            }
            if(root->right){
                construct(root->right, ans);
            }
            ans+=')';
            }
        }     
   
   
        // if(root) {
        //     ans+=to_string(root->val);
        //     if(root->left || root ->right) {
        //         ans+='(';
        //         construct(root->left,ans);
        //         ans+=')';
        //     }
        //     if(root->right) {
        //         ans+='(';
        //         construct(root->right,ans);
        //         ans+=')';
        //     }            
        // }
    string tree2str(TreeNode* root) {
       string ans = "";
    //    ans.pop_back();
       construct(root,ans);
       int n = ans.size();
       return ans.substr(1,n-2);
    }
};