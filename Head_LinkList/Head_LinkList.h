#pragma once
#include <iostream>
using namespace std;
#include "Head_LinkList.h"

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	LNode* next;
}LNode, * LinkList;

class Head_LinkList
{
public:
	Head_LinkList();
	~Head_LinkList();

	// ����һ���ڵ��ʱ�临�Ӷ�ΪO(1)
	// �������нڵ��ʱ�临�Ӷ�ΪO(n)
	bool HeadInseart(int v);
	bool TailInseart();

	// ʱ�临�Ӷ�ΪO(n)
	LNode* getElement(int index);
	LNode* LocateElem(int elem);
	int Length();

	// ʱ�临�Ӷ�ΪO(n)��ʱ����Ҫ���ڲ�����
	bool Insert(int index, int value);
	bool Delete(int index);

	void disp();

private:
	LinkList h;		//ͷָ��
};



