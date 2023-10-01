class Queue {

	int front, rear;
	vector<int> arr;
	int currSize,maxSize;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		currSize = 0;
		arr.resize(100001);
		maxSize = arr.size();
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		if(isFull())return;
		arr[rear%maxSize]=e;
		currSize++;
		rear++;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(isEmpty()){
			return -1;
		}
		currSize--;
		int index = front%maxSize;
		front++;
		return arr[index];

	}
	bool isFull(){
		return currSize == maxSize;

	}
	bool isEmpty(){
		return currSize==0;
	}
};