#include <iostream>
//#include <cmath>
#include <queue>

#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int nn;
    cin >> nn;

    /*
    int n = log2(nn);

        for (int i = 1; i <= nn; i++)
        {
            bool check = false;
            for (int j = 1; j <= n; j++)
            {
                check |= (i % ((int)pow(2, j)) > 0);
            }

            if (check == false)
            {
                cout << i;
                return 0;
            }
        }
    */
    queue<int> temp;
    for (int i = 1; i <= nn; i++)
    {
        temp.push(i);
    }
    int count = 1;
    while (temp.size() != 1)
    {
        int front = temp.front();
        temp.pop();
        if (count % 2 == 0)
        {
            temp.push(front);
        }
        count++;
    }

    cout << temp.front();
}
