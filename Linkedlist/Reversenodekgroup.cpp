// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* temp = head;
//         int cnt = 0;

//         while( cnt < k ){
//            if(temp == NULL) return head;
//            temp = temp->next;
//            cnt++;
//         }
//         ListNode* prevnode = reverseKGroup(temp,k);    // TC = O(n) sp = O(1)

//         temp= head,cnt =0;
//         while(cnt <k){
//             ListNode* next = temp->next;
//             temp->next = prevnode;

//             prevnode = temp;
//             temp=next;

//             cnt++;
//         }
//         return prevnode;
//     }
// };