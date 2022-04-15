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

int visited[7] = {};  int visited1[7] = {};
int graph[7][7] = {
    {0, 1, 1, 0, 1, 0, 0}, {1, 0, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 0}, {0, 0, 1, 0, 1, 1, 1}, {1, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0}};
queue q1;
void bfs()
{
    cout << "Breadth First Search\n";
    int i = 0;
    q1.enqueue(i);
    visited[i] = 1;
    cout << i << " ";
    while (!q1.isEmpty())
    {
        int explore = q1.dequeue();
        for (int j = 0; j < q1.size; j++)
            if (visited[j] == 0 && graph[explore][j] == 1)
            {
                visited[j] = 1;
                q1.enqueue(j);
                cout << j << " ";
            }
    }
}

void dfs(int x)
{
    visited1[x] = 1;
    cout << x << " ";
    for(int i=0;i<q1.size;i++) if(visited1[i]==0&&graph[x][i]==1) dfs(i);
}
int main()
{
    
    q1.size = 7;
    q1.arr = new int[q1.size * sizeof(int)];
    q1.back = q1.front = -1;
    bfs(); cout<<endl<<"Depth First Search : "; dfs(0);
    return 0;
}