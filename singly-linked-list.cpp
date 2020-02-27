/* Singly Linked List */

#include<iostream>

/* Create a Node */
class Node
{
	public:
	int data;
	Node *next = NULL;
};

/* List Operations */
class List
{
	private:
	Node *head = NULL, *tail = NULL;

	public:
	void insertNodeAtEnd(int);
	void insertNodeAtStart(int);
	void insertNodeAtIndex(int, int);
	void deleteNodeAtEnd();
	void deleteNodeAtStart();
	void deleteNodeAtIndex(int);
	void displayList();
};

/*  Insert the node at the end */
void List::insertNodeAtEnd(int newData)
{
	Node *temp = new Node;
	temp->data = newData;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

/* Insert a node at the start of list */
void List::insertNodeAtStart(int newData)
{
	Node *temp = new Node;
	temp->data = newData;
	temp->next = head;
	head = temp;
}

/* Insert a node at a particular Index */
void List::insertNodeAtIndex(int index, int newData)
{
	Node *prev = new Node;
	Node *curr = new Node;
	Node *temp = new Node;
	curr = head;
	for(int i = 1; i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	temp->data = newData;
	prev->next = temp;
	temp->next = curr;
}

/* Delete a node at the end */
void List::deleteNodeAtEnd()
{
	Node *temp = new Node;
	Node *prev = new Node;
	temp = head;
	while(temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	tail = prev;
	delete temp;
}

/* Delete node at the start */
void List::deleteNodeAtStart()
{
	Node *temp = new Node;
	temp = head;
	head = head->next;
	delete temp;
}

/* Delete node at a particular Index */
void List::deleteNodeAtIndex(int index)
{
	Node *before = new Node;
	Node *temp = new Node;
	temp = head;
	for(int i = 1; i<index; i++)
	{
		before = temp;
		temp = temp->next;
	}
	before->next = temp->next;
	delete temp;
}


/* Display the linked-list */
void List::displayList()
{
	Node *temp = new Node;
	temp = head;
	while(temp != NULL)
	{
		std::cout<<"< "<<temp->data<<" >"<<std::endl;
		temp = temp->next;
	}
	std::cout<<"---------"<<std::endl;
}

int main(){
	List obj;
	obj.insertNodeAtEnd(11);
	obj.insertNodeAtStart(10);
	obj.insertNodeAtEnd(13);
	obj.insertNodeAtIndex(3,12);
	obj.insertNodeAtEnd(14);
	obj.insertNodeAtEnd(15);
	obj.displayList();
	obj.deleteNodeAtIndex(3);
	obj.displayList();
	obj.deleteNodeAtEnd();
	obj.displayList();
	obj.deleteNodeAtStart();
	obj.displayList();
	std::cout<<"Completed."<<std::endl;
	return 0;
}