#include <iostream>
using namespace std;

int main()
{

    int N, M, Limit;
    cin >> N >> M >> Limit;

    int **array = new int* [N];
    
    for (int i = 0; i < N; i++)
    {
        array[i] = new int[M];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int num;
            cin >> num;
            array[i][j] = num;
        }
    }
    pair<int, int> compass[4] = {make_pair(-1, 0), make_pair(0, -1), make_pair(1, 0), make_pair(0, 1)};

    pair<int, int> currnode = make_pair(0, 0);
    while (currnode != make_pair(N - 1, M - 1))
    {

    }

    for (int i = 0; i < N; i++)
        delete array[i];
    delete array;
    array = nullptr;
}