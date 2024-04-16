#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string input;
    cin >> input;

    int stringindex = 0;
    int count = 0;
    while (stringindex < input.length())
    {
        count++;
        string digitstring = to_string(count);
        for (auto &elem : digitstring)
        {
            if (elem == input[stringindex])
            {
                stringindex++;
            }
        }
    }
    cout << count;
}