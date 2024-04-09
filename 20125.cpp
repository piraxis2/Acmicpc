#include <iostream>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    pair<int, int> heartposition = make_pair(-1, -1);
    int leftarm = 0;
    int rightarm = 0;
    int leftlegend = 0;
    int rightlegend = 0;
    int loins = 0;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        int firststar = input.find_first_of('*');
        int endstar = input.find_last_of('*');

        if (heartposition.first == -1 && heartposition.second == -1)
        {
            if (firststar != string::npos)
            {
                heartposition.first = i + 1;
                heartposition.second = firststar;
            }
        }

        if (i == heartposition.first)
        {
            leftarm = heartposition.second - firststar;
            rightarm = endstar - heartposition.second;
        }

        if (firststar == heartposition.second)
            loins = i;

        if (firststar == heartposition.second - 1)
            leftlegend = i;

        if (endstar == heartposition.second + 1)
            rightlegend = i;
    }
    cout << heartposition.first+1 << ' ' << heartposition.second +1<< endl;
    cout << leftarm << ' ' << rightarm << ' ' << loins - heartposition.first << ' ' << leftlegend - loins << ' ' << rightlegend - loins;
    }