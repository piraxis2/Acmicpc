#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, x;
    cin >> n >> x;

    queue<int> visiters;
    int currvisitersize = 0;
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i ++)
    {
        int input;
        cin >> input;
        visiters.push(input);
        currvisitersize += input;
        if (visiters.size() > x)
        {
            int front = visiters.front();
            visiters.pop();
            currvisitersize -= front;
        }
        if (max < currvisitersize)
        {
            max = currvisitersize;
            count = 1;
        }
        else if (max == currvisitersize)
        {
            count++;
        }
    }

    if (max > 0)
    {
        cout << max << endl;
        cout << count;
    }
    else
        cout << "SAD";
}