#include "Head_LinkList.h"

int main() {
	Head_LinkList myHead_LinkList = Head_LinkList();
	myHead_LinkList.HeadInseart(1);
	myHead_LinkList.HeadInseart(2);
	myHead_LinkList.HeadInseart(3);

	/*myHead_LinkList.TailInseart();*/
	cout << "��3��Ԫ��Ϊ��" << myHead_LinkList.getElement(3)->data << endl;
	cout << "�����һ��2��" << myHead_LinkList.LocateElem(2)->data << endl;

	cout << "��ʼ���ĵ�����Ϊ��" << endl;
	myHead_LinkList.disp();

	cout << "��2��λ�ò���100��" << endl;
	if (myHead_LinkList.Insert(2, 100))
	{
		myHead_LinkList.disp();
	}
	
	cout << "ɾ��2��λ��Ԫ�أ�" << endl;
	if (myHead_LinkList.Delete(2))
	{
		myHead_LinkList.disp();
	}

	cout << "��ǰ������ĳ���Ϊ��" << endl;
	cout << myHead_LinkList.Length() << endl;
	
	return 0;
}