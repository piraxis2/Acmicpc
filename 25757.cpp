#include <iostream>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    char c;
    cin >> n >> c;
    set<string> palyers;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        palyers.emplace(input);
    }
    switch (c)
    {
    case 'Y':
        cout << palyers.size() / 1;
        break;
    case 'F':
        cout << palyers.size() / 2;
        break;
    case 'O':
        cout << palyers.size() / 3;
        break;
    }
}