// class Solution {
// public:
//     TreeNode* buildbst(TreeNode* root,int val){
//         if(root == NULL) return new TreeNode(val);

//         if(val > root->val) root->right = buildbst(root->right,val);
//         else root->left = buildbst(root->left,val);

//         return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& pre) {
//         TreeNode* root = new TreeNode(pre[0]);
//         for(int i=1;i<pre.size();i++){
//             buildbst(root,pre[i]);
//         }
//         return root;
//     }
// };