#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N,K;
    cin >> N >> K;

    struct country 
    {
        virtual bool operator<(const country &r)
        {
            if (gold > r.gold)
                return true;

            if (gold < r.gold)
                return false;
            else
            {
                if (silver > r.silver)
                    return true;

                if (silver < r.silver)
                    return false;
                else
                {
                    if (bronze > r.bronze)
                        return true;

                    if (bronze < r.bronze)
                        return false;
                }
            }
        }

        virtual bool operator==(const country &r)
        {
            return gold == r.gold && silver == r.silver && bronze == r.bronze;
        }
        virtual bool operator!=(const country &r)
        {
            return gold != r.gold || silver != r.silver || bronze != r.bronze;
        }

        int id;
        int gold;
        int silver;
        int bronze;
        int rank;
    };

    vector<country> countrys;

    for (int i = 0; i < N; i++)
    {
        country country;
        cin >> country.id >> country.gold >> country.silver >> country.bronze;
        countrys.push_back(country);
    }
    sort(countrys.begin(), countrys.end());

    int rank = 1;
    vector<country>::iterator iter = countrys.begin();
    vector<country>::iterator previter = countrys.end();
    int id = 0;
    int count = 0;
    while (id != K)
    {
        count++;
        if (previter == countrys.end() || (*previter) != (*iter))
        {
            rank = count;
        }

        id = (*iter).id;
        previter = iter;
        iter++;
    }
    cout << rank;
}