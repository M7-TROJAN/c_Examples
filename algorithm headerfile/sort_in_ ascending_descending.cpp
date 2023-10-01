#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {10, 500, 60, -20, 20, 20, 100, 20};

    // print vector elements befor sorting
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "=====================\n";

    // sort vector elements in ascending order
    sort(nums.begin(), nums.end());

    // print vector elements after sorting in ascending order
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "=====================\n";

    // sort vector elements in descending order
    sort(nums.rbegin(), nums.rend());

    // print vector elements after sorting in descending order
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "=====================\n";


    return 0;
}