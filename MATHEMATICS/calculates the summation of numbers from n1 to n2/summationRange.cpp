

int summationRange(int n1, int n2)
{
    int sum = (n2 - n1 + 1) * (n1 + n2) / 2;
    return sum;
}

/*
Explanation:
- This function calculates the sum of numbers from 'n1' to 'n2', inclusive.
- The formula used is based on a mathematical concept known as the sum of an arithmetic series.
- The sum is calculated by multiplying the number of terms in the series ('n2 - n1 + 1') by the average of the first and last term ('(n1 + n2) / 2').
- By applying this formula, we efficiently calculate the sum without the need for iteration.
- For example, if 'n1' is 5 and 'n2' is 10, the calculation is '((10 - 5 + 1) * (5 + 10)) / 2 = (6 * 15) / 2 = 90 / 2 = 45', which represents the sum of numbers from 5 to 10.
*/