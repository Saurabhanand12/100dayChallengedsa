// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head == NULL || head->next == NULL) return head ; 

//         ListNode* prev = NULL;
//         ListNode* first = head;
//         ListNode* sec = head->next;                     // TC = O(N) sp = O(1)

//         while( first != NULL && sec != NULL ){
//             ListNode* third = sec->next;
//             first->next = third;
//             sec->next = first;

//             if(prev != NULL) prev->next = sec;
//             else head = sec;

//            prev = first ;
//             first = third;
//            if(third != NULL) sec = third->next;
//            else sec = NULL;
//         }
//         return head;
//     }
// };