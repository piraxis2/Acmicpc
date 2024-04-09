#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, point, p;
    cin >> n >> point >> p;

    int count = 1;
    int position = 1;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input > point)
            count++;
        if (input >= point)
            position++;
    }
    if (count > p || position > p)
        count = -1;
    cout << count;
}