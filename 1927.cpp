#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N,x;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> priorityQueue;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x != 0)
            priorityQueue.push(x);
        else
        {
            if (priorityQueue.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << priorityQueue.top() << "\n";
                priorityQueue.pop();
            }
        }
    }
}