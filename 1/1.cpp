#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, s;
    cout << "n: ";
    cin >> n;

    int nums[100] = { 0 };
    s = n - 1;
    nums[s] = 1;
    for (int i = 0; i < n; ++i)
    {
        cout << "\n";
        for (int j = 0; j < s; ++j)
            cout << "  ";
        for (int j = 0 ,temp; j <= i; ++j)
        {
            temp = nums[s + j] + nums[s + j + 1];
            cout << temp << setw(4);
            nums[s + j] = temp;
        }
        --s;
    }
    return 0;
}