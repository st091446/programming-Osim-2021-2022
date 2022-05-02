#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;

	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	cout << list << endl;
	
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;

	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-2);
	cout << list << endl;
	list.insert(-1, 1);
	list.insert(200, 8);
	cout << list << endl;

	list.extract(5);
	cout << list << endl;

	list.swap(1, 3);
	cout << list << endl;
	return EXIT_SUCCESS;
}