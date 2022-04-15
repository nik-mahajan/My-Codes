#include <iostream>
using namespace std;

class cqueue
{
public:
    int back, front, *arr, size;
    bool isFull()
    {
        if (((front + 1) % size) == back)
            return true;
        return false;
    }

    bool isEmpty()
    {
        if (front == back)
            return true;
        return false;
    }
    void enqueue(int ele)
    {
        if (!isFull())
        {
            front = (front + 1) % size;
            arr[front] = ele;
        }
    }

    int dequeue()
    {
        if (!isEmpty())
        {
            back = (back + 1) % size;
            return arr[back];
        }
        return -1;
    }
};

int main()
{
    cqueue c1;
    c1.size = 6;
    c1.arr = new int[(c1.size) * sizeof(int)];
    c1.back = 0;
    c1.front = 0;
    c1.enqueue(5);
    c1.enqueue(1);
    c1.enqueue(45);
    cout << c1.dequeue() << " ";
    c1.enqueue(65);
    c1.enqueue(81);
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";

    c1.enqueue(51);
    c1.enqueue(52);
    c1.enqueue(53);
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";
    cout << c1.dequeue() << " ";
    return 0;
}