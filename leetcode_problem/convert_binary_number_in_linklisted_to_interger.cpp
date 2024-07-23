#include "Header.h"
#include "Function.h"

int getDecimalValue(Singly* head) {
	int res = 0;
	while (head != nullptr) {
		res <<= 1;
		res |= head->val;
		head = head->next;
	}
	return res;
};
