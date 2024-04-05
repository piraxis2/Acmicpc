#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int bitmask = 0;
    constexpr int allbit = (1 << 20) - 1;

    for (int i = 0; i < n; i++)
    {
        string Command;
        cin >> Command;
        if (Command == "empty")
        {
            bitmask = 0;
            continue;
        }
        if(Command == "all")
        {
            bitmask = allbit;
            continue;
        }

        int value;
        cin >> value;
        const int bitTarget = (1 << (value - 1));
        if (Command == "add")
        {
            bitmask |= bitTarget;
        }
        if (Command == "remove")
        {
            bitmask &= (bitTarget ^ allbit);
        }
        if(Command == "check")
        {
            cout << ((bitmask & bitTarget) > 0 ? 1 : 0) << endl;
        }
        if (Command == "toggle")
        {
            if ((bitmask & bitTarget) > 0)
            {
                bitmask &= (bitTarget ^ allbit);
            }
            else
            {
                bitmask |= bitTarget;
            }
        }
    }
}