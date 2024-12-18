class Solution
{
public
  int minOperations(int[] nums, int k)
  {
    int c = Arrays.stream(nums).reduce((a, b)->a ^ b).getAsInt();
    return Integer.bitCount(k ^ c);
  }
} // 2997
// Min.No.ofoperationtomakeArrayXOR=k