// mission2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

class Solution
{
public:
	Solution();
	~Solution();

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	
		ListNode* pResHead = NULL;
		ListNode* pResEnd  = NULL;
		int carry = 0;

		while (NULL != l1 || NULL != l2 || carry)
		{
			int value = (NULL != l1 ? l1->val : 0) + (NULL != l2 ? l2->val : 0) + carry;
			carry = value / 10;

			ListNode *p = new ListNode(value % 10);

			if (NULL == pResHead)
			{
				pResHead = p;
			}

			if (NULL != pResEnd)
			{
				pResEnd->next = p;
			}

			pResEnd = p;
			l1 = NULL != l1 ? l1->next : NULL;
			l2 = NULL != l2 ? l2->next : NULL;
		}
		
		return pResHead;
	
	}

private:

};

Solution::Solution()
{
}

Solution::~Solution()
{
}


ListNode* InitListNode(int* arr, int len) 
{
	if (arr == NULL) {
		return NULL;
	}
	ListNode *pHead = NULL;
	ListNode *pEnd  = NULL;

	while (len--)
	{
		ListNode *p = new ListNode(*arr);

		//头指针指向
		if (NULL == pHead)
		{
			pHead = p;
		}

		if (NULL != pEnd)
		{
			pEnd->next = p;
		}

		pEnd = p;
		++arr;
	}
	return pHead;
}

int main()
{
	//int a[3] = {2, 4, 3};
	//int b[3] = {5, 6, 4};

	int a[1] = {5};
	int b[1] = {5};

	ListNode *s = InitListNode(a, 1);
	ListNode *t = InitListNode(b, 1);

	Solution *p = new Solution();
	ListNode *r = p->addTwoNumbers(s, t);

    return 0;
}

