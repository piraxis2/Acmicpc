#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[3] = {0, 0, 0};
    vector<string> Answer;
    int *A = &array[0];
    int *B = &array[1];
    int *C = &array[2];
    do
    {
        cin >> array[0] >> array[1] >> array[2];

        int ceiling = 0;
        int total = 0;

        bool Equilateral = true;

        for (auto &elem : array)
        {
            total += elem;
            if (ceiling < elem)
            {
                ceiling = elem;
            }
        }

        if (total == 0)
            break;

        if (ceiling >= (total - ceiling))
        {
            Answer.push_back("Invalid");
            continue;
        }

        if (*A == *B && *B == *C)
        {
            Answer.push_back("Equilateral");
        }
        else if (*A != *B && *B != *C && *A != *C)
        {
            Answer.push_back("Scalene");
        }
        else if (*A == *B || *A == *C || *B == *C)
        {
            Answer.push_back("Isosceles");
        }

    } while ((*A + *B + *C) > 0);

    for (auto &elem : Answer)
    {
        cout << elem << endl;
    }
}