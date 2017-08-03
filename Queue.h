#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
};

class Queue
{
  public:
    Queue()
    :head (nullptr)
    {}
    ~Queue()
    {
        deleteList();
    }
    void enqueue(int el)
    {
	Node * trav = nullptr;
	Node * newNode = new Node();
	newNode->data = el;
	newNode->next = nullptr;
        if(head == nullptr)
	{
	    head = newNode;
	    newNode->next = newNode;
	}
	else
	{
	    for(trav = head; trav->next != head; trav = trav->next)
		    ;
	    trav->next = newNode;
	    newNode->next = head;
	}
	numNodes++;
    }
    int dequeue()
    {
	Node * trav = nullptr;
	int returnVal = 0;
        if(isEmpty())
	{
	    fprintf(stderr, "queue is empty\n");
	}
	else
        {
            returnVal = head->data;
	    for(trav = head; trav->next != head; trav = trav->next)
		    ;
	    trav->next = head->next;
	    delete head;
	    head = trav->next;
	    numNodes--;
	}
	return returnVal;

    }
    int peek()
    {
        return head->data;
    }
    bool isEmpty()
    {
        return numNodes == 0;
    }
    void clear()
    {
        deleteList();
    }
    void print()
    {
        Node * trav = head;
	if(trav != nullptr)
	{
	    do
	    {
	        cout << "node with data " << trav->data << endl;
		trav = trav->next;
	    }
	    while(trav != head);
	}	
    }
  private:
    Node * head;
    int numNodes;
    void deleteList()
    {
        if (head != nullptr)
	{
	    Node * trav = head->next;
	    Node * tmp = nullptr;
	    head->next = nullptr;
	    while( trav != nullptr )
	    {
		tmp = trav;
	        trav = trav->next;
		delete tmp;
	    }
	}
	head = nullptr;
    }
};
