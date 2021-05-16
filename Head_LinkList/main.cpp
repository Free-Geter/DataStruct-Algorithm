#include "Head_LinkList.h"

int main() {
	Head_LinkList myHead_LinkList = Head_LinkList();
	myHead_LinkList.HeadInseart(1);
	myHead_LinkList.HeadInseart(2);
	myHead_LinkList.HeadInseart(3);

	/*myHead_LinkList.TailInseart();*/
	cout << "第3个元素为：" << myHead_LinkList.getElement(3)->data << endl;
	cout << "输出第一个2：" << myHead_LinkList.LocateElem(2)->data << endl;

	cout << "初始化的单链表为：" << endl;
	myHead_LinkList.disp();

	cout << "在2号位置插入100：" << endl;
	if (myHead_LinkList.Insert(2, 100))
	{
		myHead_LinkList.disp();
	}
	
	cout << "删除2号位的元素：" << endl;
	if (myHead_LinkList.Delete(2))
	{
		myHead_LinkList.disp();
	}

	cout << "当前单链表的长度为：" << endl;
	cout << myHead_LinkList.Length() << endl;
	
	return 0;
}