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

    ListNode* swapPairs(ListNode* head) {
        struct ListNode* result = nullptr;
        while(head !=NULL){
            if(head->next != NULL){
                addNode(result, head->next->val);
                addNode(result, head->val);

                head = head->next->next;
            }else{
                addNode(result, head->val);
                break;
            }
        }
        return result;
    }
};