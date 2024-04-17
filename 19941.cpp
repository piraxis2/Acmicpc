#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count = 0;
    int index = 0;

    for (auto &elem : s)
    {
        if (elem == 'P')
        {

            for (int i = -k; i <= k; i++)
            {
                if (0 <= (index + i) && (index + i) <= n)
                {
                    if (s[index + i] == 'H')
                    {
                        s[index + i] = 'x';
                        count++;
                        break;
                    }
                }
            }
        }

        index++;
    }
    cout << count;
}