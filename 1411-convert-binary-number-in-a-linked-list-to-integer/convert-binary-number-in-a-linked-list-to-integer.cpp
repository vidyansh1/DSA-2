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
    int getDecimalValue(ListNode* head) {
    vector<int>binary;
    while(head){
        binary.push_back(head->val);
        head = head-> next;
    } 
     reverse(binary.begin(),binary.end());
     int power=1,ans=0;
     for(int i=0;i<binary.size();i++){
        ans+=binary[i]*power;
        power *=2;
     } 
     return ans;  
    }
};