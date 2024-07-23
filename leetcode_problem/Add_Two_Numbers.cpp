#include "Function.h"
#include "Header.h"

Singly* addTwoNumbers(Singly* l1, Singly* l2) {
	Singly rs;
	long n1 = 0;
	while (l1)
	{
		n1 = n1 * 10 + l1->val;
		l1 = l1->next;
	}
	long n2 = 0;
	while (l2)
	{
		n2 = n2 * 10 + l2->val;
		l2 = l2->next;
	}

	long n = n1 + n2;
	vector<int> arr;
	int tmp;
	while (n > 0)
	{
		tmp = n % 10;
		arr.push_back(tmp);
		n /= 10;
	}
	reverse(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{

	}

	return &rs;
};
