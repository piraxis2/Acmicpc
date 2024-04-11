#include <iostream>
#include <queue>

#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int size, num;
    cin >> size;
    cin >> num;

    queue<int> positions;
    for (int i = 0; i < num; i++)
    {
        int position;
        cin >> position;
        positions.push(position);
    }
    int position = positions.front();
    positions.pop();
    int lightsize = position;
    while (positions.size() > 0)
    {

        int gap = (positions.front() - position);
        if (gap > (lightsize * 2))
        {
            lightsize = gap / 2 + gap % 2;
        }
        position = positions.front();
        positions.pop();
    }
    int gap = (size - position);
    if (gap > (lightsize))
    {
        lightsize = gap;
    }
    cout << lightsize;
}