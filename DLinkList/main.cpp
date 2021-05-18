#include "DLinkList.h"

int main() {
	DLinkList my_DLinkList = DLinkList();

	my_DLinkList.Head_Insert(1);
	my_DLinkList.Head_Insert(2);
	my_DLinkList.Head_Insert(3);

	my_DLinkList.Insert(2, 100);

	my_DLinkList.disp();
	my_DLinkList.Delete(2);
	my_DLinkList.disp();
}