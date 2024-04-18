#include <iostream>
#include <map>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[6][6] = {0};

    int n, m;
    cin >> n >> m;

    map<pair<int, int>, vector<pair<int,int>>> mapper;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            int prevnum = 0;
            auto currkey = make_pair(i, j);

            mapper.emplace(currkey, vector<pair<int,int>>());
            if (i == 0)
            {
                mapper[currkey].push_back(make_pair(2, arr[i][j]));
            }
            else
            {
                for (int k = -1; k <= 1; k++)
                {
                    if (0 <= (j + k) && (j + k) < m)
                    {
                        for (auto &elem : mapper[make_pair(i - 1, j + k)])
                        {
                            if (elem.first == k)
                                continue;
                            mapper[currkey].push_back(make_pair(k, elem.second + arr[i][j]));
                        }
                    }
                }
            }
        }
    }

    int less = mapper[make_pair(n - 1, 0)].front().second;
    for (int i = 0; i < m; i++)
    {
        for (auto &elem : mapper[make_pair(n - 1, i)])
        {
            if (less > elem.second)
            {
                less = elem.second;
            }
        }
    }

    cout << less;
}