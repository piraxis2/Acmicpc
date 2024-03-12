#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int ReverseNum(string _Nums)
{
    reverse(_Nums.begin(), _Nums.end());

    int num = 0;
    int powindex = _Nums.length();
    for (auto &elem : _Nums)
    {
        --powindex;
        num += ((elem - 48) * pow(10, powindex));
    }
    return num;
   
}

int ReverseNum(int _Num)
{
    string Nums = to_string(_Num);
    return ReverseNum(Nums); 
}


int main()
{
    string N, M;
    cin >> N >> M;

    cout << ReverseNum((ReverseNum(N) + ReverseNum(M)));
}