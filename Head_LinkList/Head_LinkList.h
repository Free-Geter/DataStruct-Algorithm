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

	// 插入一个节点的时间复杂度为O(1)
	// 插入所有节点的时间复杂度为O(n)
	bool HeadInseart(int v);
	bool TailInseart();

	// 时间复杂度为O(n)
	LNode* getElement(int index);
	LNode* LocateElem(int elem);
	int Length();

	// 时间复杂度为O(n)，时间主要花在查找上
	bool Insert(int index, int value);
	bool Delete(int index);

	void disp();

private:
	LinkList h;		//头指针
};



