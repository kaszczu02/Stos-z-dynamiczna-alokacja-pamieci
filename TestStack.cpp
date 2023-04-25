#include "Stack.h"
#include <stdio.h>

int main()
{
	Stack s1;
	Stack s2;

	for(int i =0; i<25;i++)
	{
		s1.push(i);
	}

	s2.push(5);
	s2.push(6);

	for(int j = 0;j<25;j++)
	{
		int c = s1.pop();
		printf("%d ",c);
	}

	s1.push(1);
	s1.push(2);
	s1.push(3);
	printf("%d %d\n", s1.pop(), s2.pop());
	printf("%d\n", s1.pop());
	return 0;
}
