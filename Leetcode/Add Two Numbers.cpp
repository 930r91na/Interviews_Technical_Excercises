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
 #define ll long long

class Solution {
public:
    int listToInt (ListNode* l,int &unit){
        ll l1= 0;
        while (l != NULL){
            l1 += l->val * pow (10,unit);
            unit ++;
            l= l->next;
        }
        return l1;
    }

    ListNode* intToList (int n,int digits){
        
        ListNode *header = new ListNode(0);
        ListNode *track= header;
        //check number of digits
        //cout<<digits;
        if (n>pow(10,digits)-1) {
            digits+=1;
        }
        //cout<<digits;
        //decompose the number
        int u;
        //int i=1;
        while (digits-- >= 1) {
            u = n % 10;
            n /= 10;
            track->next = new ListNode (u);
            track = track->next;     
        }

        return header->next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ll lnew;
        int unit= 0,unit2=0;
        lnew = listToInt(l1,unit) + listToInt(l2,unit2);

        return intToList(lnew,max(unit,unit2));

    }
};
