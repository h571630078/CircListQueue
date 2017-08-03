#include <iostream>
#include "Queue.h"

using namespace std;

void test_constr_destr()
{
    Queue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
}

void test_enqueue()
{
    Queue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    myQ.print();
}

void test_dequeue()
{
    Queue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    myQ.print();
    for(int i = 0; i < 30; ++i)
        cout << "value of dequeue: " << myQ.dequeue() << endl; 
    myQ.print();
}

void test_peek()
{

    Queue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    myQ.print();
    for(int i = 0; i < 30; ++i)
        cout << "value of peek: " << myQ.peek() << endl; 
    myQ.print();
}

void test_clear()
{
    Queue myQ;
    for(int i = 0; i < 40; ++i)
        myQ.enqueue(i);
    myQ.print();
    myQ.clear();
    myQ.print();
}

int main()
{
//    test_constr_destr();
//    test_enqueue();
//    test_dequeue();
//    test_peek();
    test_clear();
    return 0;
}
