struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while (!head) {
            res <<= 1;
            res |= head->val;
            head = head->next;
        }
        return res;
    }
};

int main() {
    Solution s = Solution();
    ListNode* n = new ListNode(1);
    n = n->next;
    n = new ListNode(0);
    n = n->next;
    n = new ListNode(1);

    int a = s.getDecimalValue(n);
}