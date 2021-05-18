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
		LNode* tail = h;			// β�巨��Ҫά��һ��βָ��

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
		tail->next = NULL;			// ��󡰷��ϡ�������β��
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
	// ���������ֽⷨ
	// ��һ���ҵ�indexλ�õ�ǰ���ڵ㣬����ǰ���ڵ����
	// �ڶ����ҵ�indexλ�õĽڵ㣬ֱ�Ӳ��ڸýڵ�ĺ��棬Ȼ�󽻻������ڵ��data
	LNode* pre = this->getElement(index - 1);
	if (pre == NULL)	//���������������,���� <1��index�Ƿ�
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
	if (pre == NULL)	// ���������������,���� <1��index�Ƿ�
	{
		return false;
	}
	else if (pre->next == NULL)	//���ɾ��LinkList->length + 1λ���ϵ�Ԫ�أ�index�Ƿ� 
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
	LNode* temp = h->next;			// ��ͷ����벻��ͷ�ڵ��Ψһ����
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}