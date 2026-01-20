// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         if (!a) return b;
//         if (!b) return a;

//         ListNode dummy(0);
//         ListNode* tail = &dummy;

//         while (a && b) {
//             if (a->val <= b->val) {   
//                 tail->next = a;
//                 a = a->next;
//             } else {
//                 tail->next = b;
//                 b = b->next;
//             }
//             tail = tail->next;
//         }

//         tail->next = (a) ? a : b;
//         return dummy.next;
//     }

//     // Merge sort on linked list
//     ListNode* sortList(ListNode* head) {
//         if (!head || !head->next) return head;

//         // Find middle
//         ListNode* slow = head;
//         ListNode* fast = head->next;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // Split list
//         ListNode* mid = slow->next;
//         slow->next = NULL;

//         // Recursive sort
//         ListNode* left = sortList(head);
//         ListNode* right = sortList(mid);

//         // Merge
//         return merge(left, right);
//     }
// };