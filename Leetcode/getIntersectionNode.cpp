/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
 first aproach 
 Compare each node of a with the ones in b O(a*b)

 second approach 
 hashing postion of nodes 
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *trackA=headA;
        ListNode *trackB=headB;
        unordered_map <ListNode*,int> hash;
        
        //fill hash
        while (trackB != NULL){
            hash[trackB]=1;
            trackB=trackB->next;
        }
        while (trackA != NULL){
            hash[trackA]+=1;
            if (hash[trackA]==2){
                return trackA;
            }
            trackA=trackA->next;
        }
        return NULL;
    }
};
