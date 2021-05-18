#include "SqStack.h"

void InitStack(SqStack& s) {
	s.top = -1;
}
bool StackEmpty(SqStack s) {
	return s.top == -1;
}
bool Push(SqStack& s, ElemType x) {
	if (s.top == MaxSize - 1)
	{
		return false;
	}
	else
	{
		s.data[++s.top] = x;
		return true;
	}
}
bool Pop(SqStack& s, ElemType& x) {
	if (s.top == -1)
	{
		return false;
	}
	else
	{
		x = s.data[s.top--];
		return true;
	}
}
bool GetTop(SqStack s, ElemType& x) {
	if (s.top == -1)
	{
		return false;
	}
	else
	{
		x = s.data[s.top];
		return true;
	}
}