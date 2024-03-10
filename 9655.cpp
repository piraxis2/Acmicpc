#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N;
    cin >> N;

    /*
    set<int> setter;
    setter.emplace(1);
    setter.emplace(3);
    for (int i = 4; i <= N; i++)
    {
        if (!(setter.count(i - 1) || setter.count(i - 3)))
        {
            setter.emplace(i);
        }
    }
    cout << (setter.count(N) ? "SK" : "CY");
    */
    cout << (N % 2 ? "SK" : "CY");
}