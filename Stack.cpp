#include "Stack.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

Stack::Stack()
{
	this->top = 0;
	this->size = 20;
	int *stos = NULL;
	stos = (int*)malloc(this->size*sizeof(int));
	if(stos == NULL)
	{
		printf("Alokacja pamieci nie powiodla sie");
		exit(1);
	}
	this->dane = stos;
		
}

Stack::~Stack()
{
	free(this->dane);
}

void Stack::push(int a)
{
	if(this->top == this->size)
	{
		int *tym = NULL;
		tym = (int*)realloc(this->dane,(this->size + STACKSIZE) * sizeof(int));
		if(tym == NULL)
		{
			printf("Alokacja pamieci sie nie powiodla");
			exit(1);
		}
		this->dane = tym;
		this ->size +=STACKSIZE;
	}
	
	this->dane[this->top] = a;
	this->top++;
}

int Stack::pop()
{
	if(this->top == 0)
	{
		printf("Stos jest pusty");
		exit(1);
	}    
	return this->dane[--this->top];
}

void Stack::clear()
{
	this->top = 0;
}
