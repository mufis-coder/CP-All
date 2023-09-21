#include<iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addNode(ListNode*& nodes, int val){
        struct ListNode* newNode = new ListNode(val);
        if(nodes == NULL) {
            nodes = newNode;
        }
        else{
            ListNode* curr = nodes;
            while(curr->next) curr = curr->next;
            curr->next = newNode;
        }

        return nodes;
    }

    void reverse(ListNode* head, ListNode*& res){
        if(head == NULL) return;
        reverse(head->next, res);
        addNode(res, head->val);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* result = nullptr;
        reverse(head, result);
        return result;
    }
};