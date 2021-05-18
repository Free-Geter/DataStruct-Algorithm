#include "Head_LinkList.h"
#pragma warning(disable : 4996).

Head_LinkList::Head_LinkList()
{
	h = new LNode;
	h->next = NULL;
}

Head_LinkList::~Head_LinkList()
{
	LNode* temp = NULL;
	while (h->next != NULL)
	{
		temp = h->next;
		delete(h);
		h = temp;
	}
	h = NULL;
}

bool Head_LinkList::HeadInseart(int value) {
	try
	{
		LNode* temp = new LNode;
		temp->data = value;
		temp->next = h->next;
		h->next = temp;
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
}

bool Head_LinkList::TailInseart() {
	try
	{
		LNode* tail = h;			// 尾插法需要维护一个尾指针

		int x = 0;
		cin >> x;
		while (x != 9999)
		{
			LNode* temp = new LNode;
			temp->data = x;
			tail->next = temp;
			tail = temp;
			cin >> x;
		}
		tail->next = NULL;			// 最后“封上”单链表尾部
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
}

LNode* Head_LinkList::getElement(int index) {
	int count = 1;
	LNode* p = h->next;
	if (index == 0)
	{
		return h;
	}
	else if (index < 1)
	{
		return NULL;
	}
	while (p != NULL)
	{
		if (count == index)
		{
			return p;
		}
		p = p->next;
		count++;
	}
	return NULL;
}

LNode* Head_LinkList::LocateElem(int elem) {
	LNode* p = h->next;
	while (p != NULL)
	{
		if (p->data == elem)
		{
			return p;
		}
		else
		{
			p = p->next;
		}
	}
	return NULL;
}

bool Head_LinkList::Insert(int index, int value) {
	// 这里有两种解法
	// 第一：找到index位置的前驱节点，插在前驱节点后面
	// 第二：找到index位置的节点，直接插在该节点的后面，然后交换两个节点的data
	LNode* pre = this->getElement(index - 1);
	if (pre == NULL)	//如果超出单链表长度,或者 <1，index非法
	{
		return false;
	}
	else
	{
		LNode* temp = new LNode;
		temp->data = value;
		temp->next = pre->next;
		pre->next = temp;
	}
	return true;
}

bool Head_LinkList::Delete(int index) {
	LNode* pre = getElement(index - 1);
	if (pre == NULL)	// 如果超出单链表长度,或者 <1，index非法
	{
		return false;
	}
	else if (pre->next == NULL)	//如果删除LinkList->length + 1位置上的元素，index非法 
	{
		return false;
	}
	else
	{
		LNode* temp = pre->next;
		pre->next = temp->next;
		delete(temp);
		return true;
	}
}

int Head_LinkList::Length() {
	LNode* p = h->next;
	int count = 0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}

void Head_LinkList::disp() {
	LNode* temp = h->next;			// 带头结点与不带头节点的唯一区别
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}