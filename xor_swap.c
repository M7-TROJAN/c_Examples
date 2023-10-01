
#include <stdio.h>

int main()
{
  int x = 25;
  int y = 35;

  // swaps the values of x and y by applying xor bitwise operator, see
  // explanation for how it works below
  x = x ^ y;
  y = x ^ y;
  x = x ^ y;

  // confirm variable values have been swapped
  printf("x: %d, y: %d\n", x, y);

  return 0;
}

// Numbers like 25 and 35 are ultimately represented as binary numbers in a
// computer:
//
//   25 = 00011001
//   35 = 00100011
//
// The XOR operator ^ works on pairs of bits at each index in two numbers,
// with these rules:
//
//   1 XOR 1 = 0
//   1 XOR 0 = 1
//   0 XOR 1 = 1
//   0 XOR 0 = 0
//
// So for example, 25 XOR 35 results in:
//
//   25 = 00011001
//   35 = 00100011
//  XOR = 00111010

// In all cases, X and Y end up swapping values (at the level of each bit)!
// Then applying this to all bits ends up swapping the entire values.
