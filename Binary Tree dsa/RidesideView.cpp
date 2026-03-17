//// BINARY TREE RIGHT SIDE VIEW /////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void nthlevel(TreeNode* root,int curr,int level,vector<int>& ans){
//         if(root == NULL ) return ;
//         if(curr == level){                                    
//             ans[curr] = root->val;
//             return;
//         }
//         nthlevel(root->left,curr+1,level,ans);                     // FIRST METHOD
//         nthlevel(root->right,curr+1,level,ans);  
//     }
//     void levelorder(TreeNode* root,vector<int>& ans){
//         int n = ans.size();                
//         for(int i=0;i<n;i++){
//             nthlevel(root,0,i,ans);                           
//             cout<<endl;
//         }
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(levels(root) ,0);
//         levelorder(root,ans);
//         return ans; 
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void preorder(TreeNode* root,vector<int>& ans,int level){
//         if(root == NULL)  return;                                 // SECOND METHODE
//         ans[level] = root->val;
//         preorder(root->left,ans,level+1);
//         preorder(root->right,ans,level+1);
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(levels(root) ,0);
//         preorder(root,ans,0);
//         return ans;
//     }
// };