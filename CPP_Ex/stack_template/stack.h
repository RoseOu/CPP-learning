template <class T>
class Stack
{

private:
	int top,stacksize;
	T * data;

public:
	Stack(int s=100):stacksize(s+1),top(-1)
	{
		data=new T[stacksize];
	}

	~Stack()
	{
		delete []data;
	}

	void push(const T&x)
	{
		data[++top % stacksize]=x;
	}

	T pop()
	{
		return data[top-- % stacksize];
	}

	int is_empty()const
	{
		return top == -1;
	}

	int is_full()const
	{
		return top == stacksize-1;
	}

};