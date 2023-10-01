#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const vector<int> nums = {10, 90, 0, 40, 500, 459, 1, 238, -12, 9, 8};

    int minVal = *min_element(nums.begin(), nums.end()); // -12
    int maxVal = *max_element(nums.begin(), nums.end()); // 500

    cout << minVal << endl; // -12
    cout << maxVal << endl; // 500

}