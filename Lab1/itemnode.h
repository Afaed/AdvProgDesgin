#include <iostream>
#include <string>
using namespace std;

//From lab 7.19 LAB: Inventory (linked lists: insert at the front of a list)
//Justin Choy

class InventoryNode {
private:
	string item;
	int numberOfItems;
	InventoryNode* nextNodeRef;

public:
	//Constructor
	InventoryNode() {
		this->item = "";
		this->numberOfItems = 0;
		this->nextNodeRef = NULL;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = NULL;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit, InventoryNode nextLoc) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = &nextLoc;
	}


	// TODO: Define InsertAtFront() member function that inserts a node at the 
	//       front of the linked list (after the dummy head node)

	void InsertAtFront(InventoryNode* headNode, InventoryNode* currNode) {
		currNode->nextNodeRef = headNode;
		headNode->nextNodeRef = currNode;

	}


	//Get the next node
	InventoryNode* GetNext() {
		return this->nextNodeRef;
	}

	//Print node data
	void PrintNodeData() {
		cout << this->numberOfItems << " " << this->item << endl;
	}
};