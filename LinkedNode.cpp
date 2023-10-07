#include "LinkedNode.h"
LinkedNode::LinkedNode() {
	head = tail = NULL;
}

LinkedNode::~LinkedNode() {
	while (!IsEmpty()) {
		int tmp = DeleteFromHead();
	}
}

bool LinkedNode::IsEmpty() {
	return (head == NULL);
}

void LinkedNode::AddToHead(int el) {
	head = new Node(el, head);
	if (tail == NULL)
		tail = head;
}

void LinkedNode::AddToTail(int el) {
	if (!IsEmpty()) {
		tail->next = new Node(el);
		tail = tail->next;
	}
	else
		head = tail = new Node(el);
}

int LinkedNode::DeleteFromHead() {
	if (IsEmpty())
		throw("Lista je prazna !!");
	int el = head->info;
	Node* tmp = head;
	if (head == tail)
		head = tail = NULL;
	else
		head = head->next;
	delete tmp;
	return el;
}

int LinkedNode::DeleteFromTail() {
	if (IsEmpty())
		throw "Lista je prazna !";
	int el = tail->info;
	Node* forDel = tail;
	if (head == tail)
		head = tail = NULL;
	else {
		Node* tmp = head;
		while (tmp != tail) {
			tmp = tmp->next;
		}
		tail = tmp;
		tail->next = NULL;
	}
	delete forDel;
	return el;
}

Node* LinkedNode::FindNode(int el) {
	Node* tmp = head;
	while (head != NULL && tmp->info != el) {
		tmp = tmp->next;
	}
	return tmp;
}

Node* LinkedNode::GetHead() {
	return head;
}

Node* LinkedNode::GetNext(Node* ptr) {
	return head->next;
}

int LinkedNode::GetHeadInfo() {
	return head->info;
}

int LinkedNode::GetNextInfo(Node* ptr) {
	return head->next->ReturnInfo();
}

void LinkedNode::PrintAll() {
	Node* tmp = head;
	while (tmp != NULL) {
		cout << "[" << tmp->ReturnInfo() <<"] ";
		tmp = tmp->next;
	}
	cout << endl;
}

bool LinkedNode::IsInList(int el) {
	Node* tmp = head;
	while (tmp != NULL && tmp->info != el) {
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return false;
	if (tmp->ReturnInfo() != el)
		return false;
	return true;
}

void LinkedNode::DeleteEl(int el) {
	if (IsEmpty())
		throw "Niz je prazan !!";
	if (head == tail && head->IsEqual(el)) {
		delete head;
		head = tail = NULL;
	}
	else if (el == head->info) {
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}
	else {
		Node* pred, * tmp;
		tmp = head->next;
		pred = head;
		while (tmp != NULL && !tmp->IsEqual(el)) {
			tmp = tmp->next;
			pred = pred->next;
		}

		if (tmp != NULL) {
			pred->next = tmp->next;
			if (tmp == tail)
				tail = pred;
			delete tmp;
		}
	}

}
