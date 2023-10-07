#pragma once
#include<iostream>
#include"Node.h"
using namespace std;
class LinkedNode
{
public:
	Node* head, *tail;


	LinkedNode();
	~LinkedNode();
	bool IsEmpty();
	void AddToHead(int el);
	void AddToTail(int el);
	int DeleteFromHead();
	int DeleteFromTail();
	Node* FindNode(int el);
	Node* GetHead();
	Node* GetNext(Node* ptr);
	int GetHeadInfo();
	int GetNextInfo(Node* ptr);
	void PrintAll();
	bool IsInList(int el);
	void DeleteEl(int el);
};

