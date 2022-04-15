#include <iostream>
using namespace std;

class queue
{
public:
    int *arr, size, back, front;
    bool isEmpty()
    {
        if (back == front)
            return true;
        return false;
    }
    void enqueue(int ele)
    {
        front++;
        arr[front] = ele;
    }

    int dequeue()
    {
        back++;
        return arr[back];
    }
};

int main()
{
    queue q1;  q1.back=q1.front=-1;
    q1.size=7; q1.arr=new int[q1.size*sizeof(int)];
    q1.enqueue(1);  q1.enqueue(2); cout<<q1.dequeue()<<endl; q1.enqueue(3);  
     q1.enqueue(5);  cout<<q1.dequeue()<<endl; 
    return 0;
}