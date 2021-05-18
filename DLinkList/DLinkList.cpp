#include "DLinkList.h"

DLinkList::DLinkList()
{
	h = new DNode;
	h->prior = h->next = NULL;
}

DLinkList::~DLinkList()
{
	DNode* temp = NULL;
	while (h->next != NULL)
	{
		temp = h->next;
		delete(h);
		h = temp;
	}
}

DNode* DLinkList::getElement(int index) {
	if (index < 0)
	{
		return NULL;
	}
	else if (index == 0)
	{
		return h;
	}
	else
	{
		DNode* temp = h->next;
		int count = 1;
		while (temp != NULL)
		{
			if (count == index)
			{
				return temp;
			}
			else
			{
				temp = temp->next;
				count++;
			}
		}
		return NULL;
	}
}

bool DLinkList::Insert(int index, int value) {
	try
	{
		if (DNode* pre = getElement(index))
		{
			DNode* temp = new DNode;
			temp->data = value;
			pre->prior->next = temp;
			temp->prior = pre->prior;
			temp->next = pre;
			pre->prior = temp;
			return true;

		}
		else
		{
			return false;
		}
	}
	catch (const std::exception&)
	{
		return false;
	}
}

bool DLinkList::Delete(int index) {
	if (DNode* temp = getElement(index))
	{
		temp->prior->next = temp->next;
		temp->next->prior = temp->prior;
		delete(temp);
		return true;
	}
	else
	{
		return false;
	}
}

bool DLinkList::Head_Insert(int value) {
	try
	{
		if (h->next == NULL)
		{
			DNode* temp = new DNode;
			temp->data = value;
			temp->next = h->next;
			h->next = temp;
			temp->prior = h;
		}
		else
		{
			DNode* temp = new DNode;
			temp->data = value;
			temp->next = h->next;
			h->next->prior = temp;
			h->next = temp;
			temp->prior = h;
		}
	}
	catch (const std::exception&)
	{
		return false;
	}
}

void DLinkList::disp() {
	DNode* temp = h->next;
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}