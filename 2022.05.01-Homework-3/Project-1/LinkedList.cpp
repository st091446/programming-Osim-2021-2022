#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	if (index >= count - 1)
	{
		pushTail(element);
	}
	else if (index <= 0)
	{
		pushHead(element);
	}
	else
	{
		Node* before = head;
		for (int i = 0; i < index - 1; i++)
		{
			before = before->next;
		}
		Node* actual = before->next;

		Node* temp = new Node();
		temp->data = element;
		temp->next = actual;
		before->next = temp;
		count++;
	}
}

int LinkedList::extract(int index)
{
	if (index >= count - 1)
	{
		popTail();
	}
	else if (index <= 0)
	{
		popHead();
	}
	else
	{
		Node* before = head;
		for (int i = 0; i < index - 1; i++)
		{
			before = before->next;
		}
		Node* actual = before->next;

		before->next = actual->next;
		int value = actual->data;
		delete actual;
		count--;
		return value;
	}
}

void LinkedList::swap(int index1, int index2)
{
	if (index1 != index2)
	{
		if (index1 >= count)
		{
			index1 = count - 1;
		}
		if (index2 >= count)
		{
			index2 = count - 1;
		}
		if (index1 < 0)
		{
			index1 = 0;
		}
		if (index2 < 0)
		{
			index2 = 0;
		}
		if (index1 > index2)
		{
			int t = index1;
			index1 = index2;
			index2 = t;
		}
		Node* before1 = head;
		for (int i = 0; i < index1 - 1; i++)
		{
			before1 = before1->next;
		}
		Node* actual1 = before1->next;
		Node* next1 = actual1->next;

		Node* before2 = head;
		for (int i = 0; i < index2 - 1; i++)
		{
			before2 = before2->next;
		}
		Node* actual2 = before2->next;
		Node* next2 = actual2->next;

		if (index1 != 0 && (index2 - 1 != index1))
		{
			before1->next = actual2;
			actual2->next = next1;

			before2->next = actual1;
			actual1->next = next2;
		}
		else if (index1 == 0)
		{
			head = actual2;
			actual2->next = next1;

			before2->next = actual1;
			actual1->next = next2;
		}
		else if (index2 - 1 == index1)
		{
			before1->next = actual2;
			actual2->next = actual1;
			actual1->next = next2;
		}
	}
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}
