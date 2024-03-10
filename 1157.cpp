#include <iostream>
#include <map>
using namespace std;

int main()
{
    string Insert = "";

    map<char, int> CharMap;
    cin >> Insert;

    for (auto &elem : Insert)
    {
        char Key = elem > 96 ? elem - 32 : elem;


        map<char, int>::iterator count = CharMap.find(Key);
        if (count != CharMap.end())
        {
            CharMap[Key]++;
        }
        else
        {
            CharMap.insert(make_pair(Key, 1));
        }
    }
    char Answer;
    int Count = 0;
    int temp = 0;
    for (auto &elem : CharMap)
    {
        if (Count == elem.second)
        {
            temp++;
        }

        if (Count < elem.second)
        {
            temp = 0;
            Count = elem.second;
            Answer = elem.first;
        }
    }
    cout << ((temp > 0) ? '?' : Answer);
}