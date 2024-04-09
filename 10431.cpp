#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    map<int,int> counts;
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        vector<int> tcase;
        int count = 0;
        for (int j = 0; j < 20; j++)
        {
            int value;
            cin >> value;
            int innercount = 0;
            for (auto &elem : tcase)
            {
                if (elem > value)
                {
                    innercount++;
                }
            }
            count += innercount;

            tcase.push_back(value);
        }
        cout << key << ' ' << count << '\n';
    }
    
}