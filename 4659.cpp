#include <iostream>
#include <set>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string input;

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<pair<string, string>> qualitys;
    while (true)
    {
        cin >> input;
        if (input == "end")
            break;
        bool bvowelpass = false;
        int vowelcount = 0;
        int consonant = 0;
        char samecheck = ' ';
        for (auto &elem : input)
        {
            if (elem != 'e' && elem != 'o')
            {
                if (samecheck != elem)
                {
                    samecheck = elem;
                }
                else
                {
                    bvowelpass = false;
                    break;
                }
            }

            if(vowels.count(elem))
            {
                consonant = 0;
                vowelcount++;
                bvowelpass |= true;
                if (vowelcount > 2)
                {
                    bvowelpass = false;
                    break;
                }
            }
            else
            {
                vowelcount = 0;
                consonant++;
                if (consonant > 2)
                {
                    bvowelpass = false;
                    break;
                }
            }
        }

        qualitys.push_back(make_pair(input, bvowelpass ? "acceptable." : "not acceptable."));
    }
    for (auto &quality : qualitys)
        cout << '<' << quality.first << "> is " << quality.second << endl;
}