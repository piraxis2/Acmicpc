#include <iostream>

using namespace std;

int main()
{
    int col, row, vblank, hblank = 0;
    cin >> col >> row >> vblank >> hblank;

    int colan = (col / (vblank + 1)) + ((col % (vblank + 1)) > 0 ? 1 : 0);
    int rowan = (row / (hblank + 1)) + ((row % (hblank + 1)) > 0 ? 1 : 0);

    cout << colan * rowan;
}