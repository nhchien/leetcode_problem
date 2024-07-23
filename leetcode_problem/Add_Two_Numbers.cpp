//#include <iostream>
//#include <vector>
//#include <algorithm>
////You are given two non - empty linked lists representing two non - negative integers.
////The digits are stored in reverse order, and each of their nodes contains a single digit.
////Add the two numbers and return the sum as a linked list.
////
////You may assume the two numbers do not contain any leading zero, except the number 0 itself.
////
////Input: l1 = [2, 4, 3], l2 = [5, 6, 4]
////Output : [7, 0, 8] 
////Explanation : 342 + 465 = 807.
//using namespace std;
//
//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode rs;
//        long n1 = 0;
//        while (l1)
//        {
//            n1 = n1 * 10 + l1->val; 
//            l1 = l1->next;
//        }
//        long n2 = 0;
//        while (l2)
//        {
//            n2 = n2 * 10 + l2->val;
//            l2 = l2->next;
//        }
//
//        long n = n1 + n2;
//        vector<int> arr;
//        int tmp;
//        while (n > 0)
//        {
//            tmp = n % 10;
//            arr.push_back(tmp);
//            n /= 10;
//        }
//        reverse(arr.begin(), arr.end());
//
//        for (int i = 0; i < arr.size(); i++)
//        {
//
//        }
//
//        return &rs;
//    }
//};
//
//int main()
//{
//    ListNode lpool[10];
//    int lCnt = 0;
//    ListNode n2 = ListNode(3);
//    ListNode n1 = ListNode(4, &n2);
//    ListNode l1 = ListNode(2, &n1);
//
//    ListNode n4 = ListNode(5);
//    ListNode n3 = ListNode(6, &n4);
//    ListNode l2 = ListNode(4, &n3);
//
//    Solution sl;
//    ListNode* rs = sl.addTwoNumbers(&l1, &l2);
//
//    while (rs)
//    {
//        cout << rs->val << " ";
//        rs = rs->next;
//    }
//
//    return 0;
//}