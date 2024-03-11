#include <iostream>
#include <set>
using namespace std;

bool IsValidNode(const pair<int, int> &_tempNode, int _max, const set<pair<int, int>> &_saveNode)
{
    return !(_tempNode.first < 0 || _max <= _tempNode.first || _tempNode.second < 0 || _max <= _tempNode.second || _saveNode.count(_tempNode));
}

pair<int, int> GetNextVector(const pair<int, int> &_currnode, int _max, const set<pair<int, int>> &_saveNode)
{
    pair<int, int> compass[4] = {make_pair(-1, 0), make_pair(0, -1), make_pair(1, 0), make_pair(0, 1)};
    for (auto &elem : compass)
    {
        if (IsValidNode(make_pair(_currnode.first + elem.first, _currnode.second + elem.second), _max, _saveNode))
        {
            return elem;
        }
    }
    return make_pair(0,0);
}

int main()
{
    int N, M;
    set<pair<int, int>> saveNode;
    cin >> N;
    cin >> M;
    int **array = nullptr;
    array = new int *[N];

    int Count = N * N;
    for (int i = 0; i < N; i++)
        array[i] = new int[N];

    pair<int, int> currnode = make_pair(0, 0);
    pair<int, int> snailvector = make_pair(1, 0);
    while (!(currnode.first == (N / 2) && currnode.second == (N / 2)))
    {
        saveNode.emplace(currnode);
        array[currnode.first][currnode.second] = Count;

        if (!IsValidNode(make_pair(currnode.first + snailvector.first, currnode.second + snailvector.second), N, saveNode))
        {
            snailvector = GetNextVector(currnode, N, saveNode);
        }

        currnode.first += snailvector.first;
        currnode.second += snailvector.second;

        --Count;
    }
    array[currnode.first][currnode.second] = Count;

    int x, y;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (array[i][j] == M)
            {
                x = i;
                y = j;
            }
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
    cout << x + 1 << ' ' << y + 1 << endl;
    for (int i = 0; i < N; i++)
        delete array[i];
    delete array;
    array = nullptr;
}





