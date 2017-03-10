template <class T>
class Queue
{
public:
	Queue(int s = 100):size(s+1),front(0),rear(0)
	{
		data = new T[size];
	}

	~Queue()
	{
		delete []data;
	}

	void insert(const T&x)
	{
		data[rear++ % size] = x;
	}

	T remove()
	{
		return data[front++ % size];
	}

	int is_empty()const
	{
		return front == rear;
	}
	int is_full()const
	{
		return((rear + 1) % size == front);
	}
public:
	int front,rear,size;
	T *data;

};