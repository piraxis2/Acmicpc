#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    string standard;
    cin >> standard;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        string input;
        cin >> input;

        int comparecount = 0;
        for (auto &elem : standard)
        {
            for (auto &innerelem : input)
            {
                if(innerelem == 0)
                    continue;
                if (elem == innerelem)
                {
                    innerelem = 0;
                    comparecount++;
                    break;
                }
            }
        }

        int length = input.length() > standard.length() ? input.length() : standard.length();
        int abs = (length - comparecount);
        abs *= abs < 0 ? -1 : 1;
        if (abs > 1)
        {
            continue;   
        }
        count++;
    }

    cout << count;
}