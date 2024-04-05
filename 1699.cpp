#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> sums;
    vector<int> primenums;
    sums.push_back(0);
    primenums.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int count = 0;
        auto dsqrt = sqrt(i);
        int nsqrt = dsqrt;
        if (dsqrt - nsqrt > 0)
        {
            for (int j = 1; j < primenums.size(); j++)
            {
                int primenum = primenums[j];
                int tempCount = sums[primenum] + sums[i - primenum];
                if (count == 0 || tempCount < count)
                    count = tempCount;
            }
            sums.push_back(count);
        }
        else
        {
            sums.push_back(1);
            primenums.push_back(num);
        }
    }
    cout << sums.back();
}
