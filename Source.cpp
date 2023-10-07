#include<iostream>
#include"LinkedNode.h"
#include"Node.h"
using namespace std;
void main() {
	LinkedNode l;
	l.AddToHead(5);
	l.AddToHead(4);
	l.AddToHead(1);
	l.AddToHead(6);
	l.AddToHead(7);

	l.PrintAll();
	cout << "Stanje broja 7: " << l.IsInList(7) << endl;
	l.DeleteFromHead();
	l.PrintAll();
	cout << "Stanje broja 7: " << l.IsInList(7) << endl;

	l.DeleteEl(1);
	l.PrintAll();
	system("pause");
}