#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

      struct dumb
    {
        virtual bool operator < (const dumb& r)
        {
            if (height > r.height)
            {
                if (weight > r.weight)
                    return true;

                if (weight <= r.weight)
                    return false;
            }

            // height<=r.height
            if (weight > r.weight)
            {
                return false;
            }

            return false;
        }
        int weight = 0;
        int height = 0;

        int rank = 0;
    };
    int n;
    cin >> n;

    vector<dumb> dumbs;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dumb a;
        a.weight = x;
        a.height = y;
        dumbs.push_back(a);
    }

    for (auto iter = dumbs.begin(); iter != dumbs.end(); ++iter)
    {
        for (auto &elem : dumbs)
        {
            if (elem < (*iter))
            {
                (*iter).rank++;           
            }
        }
        cout << (*iter).rank + 1 << ' ';
    }
}