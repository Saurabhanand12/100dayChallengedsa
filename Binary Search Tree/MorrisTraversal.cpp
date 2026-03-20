//////////////////////////// MORRIS TRAVERSAL INORDER TRAVARSAL ********************V V   IMP////////////////////////////////////
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         TreeNode* curr = root;
//         while(curr != NULL){
//             if(curr->left != NULL){             //// FIND THE PREDECCSOR
//                 TreeNode* pred = curr->left;
//                 while(pred->right != NULL && pred ->right!= curr){
//                     pred = pred ->right;
//                 }
//                 if(pred ->right == NULL){             // LINK
//                     pred ->right = curr;
//                     curr = curr->left;
//                 }
//                 else{
//                     pred ->right = NULL;             // UNLINK ..PRED->RIGHT ==CURR;
//                     ans.push_back(curr->val);
//                     curr = curr->right;
//                 }
//             }
//             else{
//                 ans.push_back(curr->val);
//                 curr = curr->right;
//             }
//         }
//         return ans;
//     }
// };