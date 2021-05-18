#pragma once
#include <iostream>
using namespace std;

#define MaxSize 50

typedef int ElemType;

typedef struct {
	ElemType data;
	int next;
}SLinkList[MaxSize];