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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	  ListNode* dummy = list1;
	  ListNode* dummy2= list2;

         while (dummy != nullptr && dummy2 != nullptr) {
		  if (dummy->val <= dummy2->val) {
                 if (dummy->next == nullptr) {
				  dummy->next = dummy2;
				  return list1;
			  }
			  dummy = dummy->next;
		  }
             else {
			  ListNode* temp = dummy2->next;
			  dummy2->next = dummy;
                 if (dummy == list1) {
				  list1 = dummy2;
			  }
                 else {
				  ListNode* prev = list1;
                     while (prev->next != dummy) {
					  prev = prev->next;
				  }
				  prev->next = dummy2;
			  }
			  dummy2 = temp;
		  }
         }
	  return (list1!=nullptr)? list1: list2;
     }
 };

