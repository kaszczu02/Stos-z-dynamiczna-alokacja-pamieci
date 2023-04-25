#define STACKSIZE 20

class Stack
{
public:
	Stack();
	~Stack();
	void push(int a);
	int pop();
	void clear();

private:
	int top;
	int *dane;
	int size;
};
