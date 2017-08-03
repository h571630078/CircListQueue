
using namespace std;

struct Node
{
    int data;
    Node * next;
};

class Queue
{
  public:
    Queue();
    Queue(int cap);
    ~Queue();
    void enqueue(int el);
    int dequeue();
    int peek();
    bool isEmpty();
    bool isFull();
    void clear();
  private:
    int * head;
    int numNodes;
};
