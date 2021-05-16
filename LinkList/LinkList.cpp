#include "LinkList.h"

LinkList::LinkList()
{
	h = NULL;
}

LinkList::~LinkList()
{
	delete(h);
	h = NULL;
}

bool LinkList::HeadInsert(int value) {
	// 第一个节点的处理
	if (h == NULL)		
	{
		try
		{
			h = new LNode;
			h->data = value;
			h->next = NULL;
			return true;
		}
		catch (const std::exception&)
		{
			return false;
		}
	}
	//其他节点在插入后，要让头节点只想新插入的节点
	else
	{
		try
		{
			LNode* temp = new LNode;
			temp->data = value;
			temp->next = h;
			h = temp;
			return true;
		}
		catch (const std::exception&)
		{
			return false;
		}
	}
}

bool LinkList::TailInsert() {
	int x = 0;
	LNode* tail = NULL;
	cin >> x;
	while (x != 9999)
	{
		try
		{
			if (h == NULL)
			{
				LNode* temp = new LNode;
				temp->data = x;
				temp->next = NULL;
				tail = h = temp;
				cin >> x;
			}
			else
			{
				LNode* temp = new LNode;
				temp->data = x;
				tail->next = temp;
				tail = temp;
				cin >> x;
			}
		}
		catch (const std::exception&)
		{
			return false;
		}
	}
	tail->next = NULL;
	return true;
}

void LinkList::disp() {
	LNode* temp = h;
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
}