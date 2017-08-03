
using namespace std;

struct Node
{
    int data;
    Node * next;

    Node(int n)
    : data(n), next (nullptr)
    {}
};

class Queue
{
  public:
    Queue()
    :head (nullptr)
    {}
    ~Queue()
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
    }
    void enqueue(int el);
    int dequeue();
    int peek();
    bool isEmpty();
    void clear();
  private:
    Node * head;
    int numNodes;
};
