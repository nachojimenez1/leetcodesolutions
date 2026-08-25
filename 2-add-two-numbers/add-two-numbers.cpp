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
        ListNode *res = new ListNode();
        ListNode *pRes = res;
        int suma;
        int temp = 0;

        while(l1 != nullptr || l2 != nullptr || temp != 0){

            suma = (l1 != nullptr ? l1->val : 0)
                    + (l2 != nullptr ? l2->val : 0)
                    + temp;

            if(suma < 10){
                pRes->val = suma;
                temp= 0;
            }else{
                pRes->val = suma % 10;
                temp = suma / 10;
            }

            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }

            if(l1 != nullptr || l2 != nullptr || temp != 0){
                ListNode *siguiente = new ListNode();
                pRes->next = siguiente;
                pRes = siguiente;
            }

        }

        return res;
    }
};