#include <cassert>
#include <iostream>
#include <stack>
using namespace std;
template <typename T>
class MyQueue
{
private:
    std::stack<T> s1, s2;

public:
    /**
     * Constructor for queue.
     */
    MyQueue() = default;

    /**
     * Pushes x to the back of queue.
     */
    void push(T x);

    /**
     * Removes an element from the front of the queue.
     */
    const T &pop();

    /**
     * Returns first element, without removing it.
     */
    const T &peek() const;

    /**
     * Returns whether the queue is empty.
     */
    bool empty() const;
};

/**
 * Appends element to the end of the queue
 */
template <typename T>
void MyQueue<T>::push(T x)
{
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    s2.push(x);
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
}

/**
 * Removes element from the front of the queue
 */
template <typename T>
const T &MyQueue<T>::pop()
{
    const T &temp = MyQueue::peek();
    s2.pop();
    return temp;
}

/**
 * Returns element in the front.
 * Does not remove it.
 */
template <typename T>
const T &MyQueue<T>::peek() const
{
    if (!empty())
    {
        return s2.top();
    }
    std::cerr << "Queue is empty" << std::endl;
    exit(0);
}

/**
 * Checks whether a queue is empty
 */
template <typename T>
bool MyQueue<T>::empty() const
{
    return s2.empty() && s1.empty();
}
int main()
{
    MyQueue<double> q;
    q.push(1.34);
    //q.pop();
    (q.empty()) ? cout << "empty\n" : cout << "not empty" << endl;
    return 0;
}