#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int distances[100000];
    int weight[100001];

    for (int i = 0; i < n - 1; i++)
    {
        cin >> distances[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    int cost = 0;
    long long answer = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (cost == 0 || cost > weight[i])
            cost = (weight[i]);

        answer += cost * (distances[i]);
    }

    cout << answer;
}