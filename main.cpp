#include "List.h"

int main()
{
	List<int> test = new List<int>();
	test.pushFront(1);
	test.pushFront(2);
	test.pushFront(3);
	test.pushFront(4);
	test.pushFront(5);
	system("pause");
	system("cls");
	test.insert(6, 0);
	system("pause");
	system("cls");
	test.destroy();
	test.initalize();
	test.print();
	system("pause");
	return 0;
}