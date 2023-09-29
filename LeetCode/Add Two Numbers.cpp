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

    void addListNodes(ListNode* l1, ListNode* l2, int doz, ListNode*& res){
        if(l1 == NULL && l2 == NULL && doz == 0) return;

        int val1 = 0, val2 = 0;
        if(l1 != NULL) val1 = l1->val;
        if(l2 != NULL) val2 = l2->val;

        int resAdd = val1 + val2 + doz;
        int dozIn = resAdd / 10;
        int un = resAdd % 10;

        addNode(res, un);

        ListNode* l1In = nullptr;
        ListNode* l2In = nullptr;
        if(l1 != NULL && l1->next != NULL) l1In = l1->next;
        if(l2 != NULL && l2->next != NULL) l2In = l2->next;

        addListNodes(l1In, l2In, dozIn, res);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = nullptr;
        addListNodes(l1, l2, 0, res);
        return res;
    }
};