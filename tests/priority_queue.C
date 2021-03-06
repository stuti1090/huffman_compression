#include <iostream>
#include "../corelib/tree.h"
#include "../corelib/priority_queue.h"
using namespace std;

void sorting_test()
{
    cout << "Simple Sorting Test" << endl;
    priority_queue queue;
    tree::node m(19, 20, NULL, NULL);
    queue.enqueue(m);
    m = tree::node(12, 15, NULL, NULL);
    queue.enqueue(m);
    m = tree::node(9, 8, NULL, NULL);
    queue.enqueue(m);
    m = tree::node(18, 70, NULL, NULL);
    queue.enqueue(m);
    m = tree::node(89, 4, NULL, NULL);
    queue.enqueue(m);
    m = tree::node(15, 13, NULL, NULL);
    queue.enqueue(m);

    while (!queue.is_empty())
    {
        m = queue.dequeue();
        cout << (int)m.get_data() << "   " << m.get_frequency() << endl;
    }
}
void rand_queue_dequeue()
{
    cout << "Random queue dequeue test" << endl;
    //priority_queue q;
    //tree::node m(1, 8, NULL, NULL);
    //q.enqueue(m);
    //tree::node m(1, 8, NULL, NULL);
    //q.enqueue(m);
    //todo who even likes sad tests. :3 whatevers dude
}
void dequeue256()
{
    cout << "Testing if dequeue pops all 256 items" << endl;
    priority_queue q;
    tree::node x(2, 2, 0, 0);
    for (int i = 0; i < 256; i++)
    {
        q.enqueue(x);
    }

    while (!q.is_empty())
    {
        cout << q.dequeue()
             << endl;
    }
}
int main()
{
    cout << "Testing priority queue" << endl;
    // sorting_test();
    cout << "===============" << endl;
    dequeue256();
}