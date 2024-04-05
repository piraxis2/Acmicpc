#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<list<char>> outlist;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        list<char> logger;
        auto iter = logger.end();
        for (auto &elem : s)
        {
            if (elem == '<')
            {

                --iter;
            }
            else if (elem == '>')
                ++iter;
            else if (elem == '-')
            {
                iter = logger.erase(iter);
                iter--;
            }
            else
            {
                iter = logger.insert(iter, elem);
                iter++;
            }
        }
        outlist.push_back(logger);
    }
    for (auto &elem : outlist)
    {
        for (auto &innerelem : elem)
        {
            cout << innerelem;
        }
        cout << endl;
    }
}