#pragma once

#include <iostream>

using namespace std;

#define MaxSize 100

typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack& s);
bool StackEmpty(SqStack s);
bool Push(SqStack& s, ElemType x);
bool Pop(SqStack& s, ElemType& x);
bool GetTop(SqStack s, ElemType& x);
