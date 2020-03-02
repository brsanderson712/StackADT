#ifndef MYTSTACKADT_H
#define MYTSTACKADT_H

template <typename T>
class MyTStackADT
{
public:
	~MyTStackADT()
	{
		while (myStack != nullptr)
		{
			std::cout << "Popping " << top() <<  std::endl;
			pop();
		}
		std::cout << "Stack empty\n";
		system("pause");
	}

	bool isEmpty() const
		{	return(myStack == nullptr);	};
	
	int size() const
		{	return(count);	};
	
	const T & top() const
		{	if (!isEmpty()) return(myStack->data);	};

	void push(T item)
	{
		Node* node = new Node;
		node->data = item;
		node->next = myStack;
		myStack = node;
		count++;
	}

	void pop()
	{
		Node* topItem;
		if (!isEmpty())
		{
			topItem = myStack;
			myStack = myStack->next;
			delete topItem;
			count--;
		}
	}

private:
	class Node
	{
		public:
			T data;
			Node* next = nullptr;
	};
	int count = 0;
	Node* myStack = nullptr;
};

#endif
