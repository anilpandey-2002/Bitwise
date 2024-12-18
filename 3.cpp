class Solution
{
public:
  int findComplement(long n)
  {
    for (long i = 1; i <= n; i <<= 1)
      n ^= i;
    return n;
  }
};
// 476
//  NumberComplement