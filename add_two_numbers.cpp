// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/add-two-numbers/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *tail = head;
        
        int d, nextVal = 0;
        while(l1 || l2 || nextVal) {
            d = nextVal;
            d += l1 ? l1->val : 0;
            d += l2 ? l2->val : 0;
            
            nextVal = d/10;
            tail->next = new ListNode(d % 10);
            tail = tail->next;

            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : nullptr; // Alternativa mais precisa
        }

        // Como usamos new, libera o primeiro nó para não ficar com vazamento de memória
        // ListNode* res = head->next;
        // delete head;
        return head->next;
    }
};
