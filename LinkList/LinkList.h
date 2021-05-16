#pragma once
#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	LNode* next;
}LNode, * Head;

class LinkList
{
public:
	LinkList();
	~LinkList();

	bool HeadInsert(int v);
	bool TailInsert();

	void disp();

private:
	Head h;
};

