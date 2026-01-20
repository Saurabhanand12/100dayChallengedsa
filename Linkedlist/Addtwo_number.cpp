// ADDTWO NUMBER 1 
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* newnode = new ListNode(0);
//         ListNode* temp = newnode;

//         int carry =0;

//         while(l1 != NULL || l2 != NULL || carry != 0 ){
//             int sum = carry;

//             if(l1 != NULL) {
//                 sum +=l1->val;
//                 l1= l1->next;
//             }
//             if(l2 != NULL) {
//                 sum +=l2->val;
//                 l2= l2->next;
//             }

//             carry = sum /10;
//             int digit = sum % 10;

//             temp->next = new ListNode(digit);
//             temp= temp->next;
//         }
        
//         return newnode->next;
//     }
// };


// ADDTWO NUMBER 2 
// class Solution {
// public:
//     ListNode* reverse(ListNode* head) {
//         ListNode* prev = NULL ;
//         ListNode* curr = head;
//         ListNode* next = head;

//         while( curr != NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     ListNode* a = reverse(l1);
//     ListNode* b = reverse(l2);

//     ListNode* newnode = new ListNode(0);
//     ListNode* temp = newnode;
//     int carry = 0;

//         while (a != NULL || b != NULL || carry != 0) {
//             int sum = carry;

//             if (a != NULL) {
//                 sum += a->val;
//                 a = a->next;
//             }
//             if (b != NULL) {
//                 sum += b->val;
//                 b = b->next;
//             }

//             carry = sum / 10;
//             int digit = sum % 10;

//             temp->next = new ListNode(digit);
//             temp = temp->next;
//         }
//     return reverse(newnode->next);
//     }
// };