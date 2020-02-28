/* Doubly Linked List */

#include<iostream>

/* Create a Node */
class Node
{
    public:
    int data;
    Node *next = NULL;
    Node *prev = NULL;
};

/* List Operations */
class List
{
    private:
    Node *head = NULL, *tail = NULL;

    public:
    void insertNodeAtEnd(int);
    void insertNodeAtStart(int);
    void insertNodeAtIndexFromHead(int, int);
    void insertNodeAtIndexFromTail(int, int);
    void deleteNodeAtEnd();
    void deleteNodeAtStart();
    void deleteNodeAtIndexFromHead(int);
    void deleteNodeAtIndexFromTail(int);
    void displayListFromHead();
    void displayListFromTail();
};

/* Insert the node at the end */
void List::insertNodeAtEnd(int newData)
{
    std::cout<<"Insert the node at the end"<<std::endl;
    Node *tempNode = new Node;
    tempNode->data = newData;
    if(head == NULL)
    {
        head = tempNode;
        tail = tempNode;
    }
    else
    {
        tempNode->prev = tail;
        tail->next = tempNode;
        tail = tempNode;
        tail->next = NULL; 
    }
    displayListFromHead();
    displayListFromTail();
}

/* Insert the node at the start */
void List::insertNodeAtStart(int newData)
{
    std::cout<<"Insert the node at the start"<<std::endl;
    Node *tempNode = new Node;
    tempNode->data = newData;
    tempNode->prev = NULL;
    tempNode->next = head;
    tempNode->next->prev = tempNode;
    head = tempNode;
    displayListFromHead();
    displayListFromTail();
}

/* Insert the node at a particular index from head */
void List::insertNodeAtIndexFromHead(int index, int newData)
{
    std::cout<<"Insert the node at a particular index from head"<<std::endl;
    Node *tempNode = new Node;
    Node *currNode = new Node;
    Node *prevNode = new Node;
    currNode = head;
    for(int i = 1; i < index; i++)
    {
        prevNode = currNode;
        currNode = currNode->next;
    }
    tempNode->data = newData;
    tempNode->prev = prevNode;
    tempNode->next = currNode;
    currNode->prev = tempNode;
    prevNode->next = tempNode;
    displayListFromHead();
    displayListFromTail();
}

/* Insert the node at a particular index from tail */
void List::insertNodeAtIndexFromTail(int index, int newData)
{
    std::cout<<"Insert the node at a particular index from tail"<<std::endl;
    Node *tempNode = new Node;
    Node *currNode = new Node;
    Node *nextNode = new Node;
    currNode = tail;
    for(int i = 1; i < index; i++)
    {
        nextNode = currNode;
        currNode = currNode->prev;
    }
    tempNode->data = newData;
    tempNode->next = nextNode;
    tempNode->prev = currNode;
    currNode->next = tempNode;
    nextNode->prev = tempNode;
    displayListFromHead();
    displayListFromTail();
}

/* Delete a node from the end */
void List::deleteNodeAtEnd()
{
    std::cout<<"Delete a node from the end"<<std::endl;
    Node *temp = new Node;
    temp = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    delete temp;
    displayListFromHead();
    displayListFromTail();
}

/* Delete a node from the start */
void List::deleteNodeAtStart()
{
    std::cout<<"Delete a node from the start"<<std::endl;
    Node *temp = new Node;
    temp = head;
    head->next->prev = NULL;
    head = head->next;
    delete temp;
    displayListFromHead();
    displayListFromTail();
}

/* Delete a node at a particular index from head */
void List::deleteNodeAtIndexFromHead(int index)
{
    std::cout<<"Delete a node at a particular index from head"<<std::endl;
    Node *temp = new Node;
    temp = head;
    for(int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    displayListFromHead();
    displayListFromTail();
}

/* Delete a node at a particular index from tail */
void List::deleteNodeAtIndexFromTail(int index)
{
    std::cout<<"Delete a node at a particular index from tail"<<std::endl;
    Node *temp = new Node;
    temp = tail;
    for(int i = 1; i < index; i++)
    {
        temp = temp->prev;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    displayListFromHead();
    displayListFromTail();
}

/* Display the list from head */
void List::displayListFromHead()
{
    std::cout<<"<HEAD>\t";
    Node *temp = new Node;
    temp = head;
    while(temp != NULL)
    {
        std::cout<<"< "<<temp->data<<" >"<<" ";
        temp = temp->next;
    }
    std::cout<<"\n-------------------------------------------------------"<<std::endl;
}


/* Display the list from the end (Reverse) */
void List::displayListFromTail()
{
    std::cout<<"<TAIL>\t";
    Node *temp = new Node;
    temp = tail;
    while(temp != NULL)
    {
        std::cout<<"< "<<temp->data<<" >"<<" ";
        temp = temp->prev;
    }
    std::cout<<"\n-------------------------------------------------------"<<std::endl;
}

int main()
{
    List obj;
    obj.insertNodeAtEnd(13);
    obj.insertNodeAtStart(10);
    obj.insertNodeAtIndexFromHead(2,11);
    obj.insertNodeAtIndexFromTail(2,12);
    obj.insertNodeAtEnd(14);
    obj.insertNodeAtEnd(15);
    obj.deleteNodeAtEnd();
    obj.deleteNodeAtStart();
    obj.deleteNodeAtIndexFromHead(2);
    obj.deleteNodeAtIndexFromTail(2);
    std::cout<<"Completed."<<std::endl;
    return 0;
}
