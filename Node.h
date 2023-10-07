#pragma once
#include<iostream>
using namespace std;
class Node {
public:
	int info;
	Node* next;

	Node() {
		info = 0;
		next = NULL;
	}

	Node(int i) {
		info = i;
		next = NULL;
	}

	Node(int i, Node* n) {
		info = i;
		next = n;
	}

	~Node() {}

	int ReturnInfo() {
		return this->info;
	}

	bool IsEqual(int i) {
		return info == i;
	}

	void Print() {
		cout << "["<< info << "]" << " ";
	}
};
