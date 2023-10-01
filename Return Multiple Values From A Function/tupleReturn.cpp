#include <iostream>
#include <tuple>

std::tuple<int, int> tupleReturn(int a, int b);
int main()
{
    // Example usage
    int x = 5, y = 3;
    auto result = tupleReturn(x, y);

    int sum, difference;
    std::tie(sum, difference) = result;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}

std::tuple<int, int> tupleReturn(int a, int b)
{
    return std::make_tuple(a + b, a - b);
}