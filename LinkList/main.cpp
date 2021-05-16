#include "LinkList.h"

int main() {
	LinkList myLinkList = LinkList();
	//myLinkList.HeadInsert(100);
	//myLinkList.HeadInsert(200);
	//myLinkList.HeadInsert(300);
	myLinkList.TailInsert();

	myLinkList.disp();

	return 0;
}