#pragma once

#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct DNode {
	ElemType data;
	DNode* prior, * next;
}DNode,* DHead;

class DLinkList
{
public:
	DLinkList();
	~DLinkList();

	// ʱ�临�Ӷ�O(n)
	DNode* getElement(int index);

	// ʱ�临�Ӷ�O(1)
	bool Insert(int index, int value);
	bool Delete(int index);
	bool Head_Insert(int value);

	void disp();

private:
	DHead h;	// ͷָ��
};