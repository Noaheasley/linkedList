#include "List.h"

int main()
{
	List<int>* test = new List<int>();
	test->initalize();
	test->pushFront(5);
	test->pushFront(1);
	test->pushFront(4);
	test->pushFront(3);
	test->pushFront(2);
	system("pause");
	system("cls");
	test->destroy();
	test->print();
	system("pause");
	return 0;
}