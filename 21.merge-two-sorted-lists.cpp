// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
//         if (head1 == NULL || head2 == NULL) {
//             return head1 == NULL ? head2 : head1;
//         }
//         if (head1->val <= head2->val) {
//             head1->next = mergeTwoLists(head1->next, head2);
//             return head1;
//         } else { 
//             head2->next = mergeTwoLists(head1, head2->next);
//             return head2;
//         }
//     }
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        // Base case: when either list is empty, return the other list
        if (!h1) return h2;
        if (!h2) return h1;
else if (h1->val > h2->val) {
            h2->next = mergeTwoLists(h1, h2->next);
            return h2;
        } else {
            h1->next = mergeTwoLists(h1->next, h2);
            return h1;
        }
    }
};

