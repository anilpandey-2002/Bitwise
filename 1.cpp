class Solution
{
public:
  long long maximumValueSum(vector<int> &nums, int k, vector<vector<int>> &edges)
  {
    long long a = 0;
    int b = 0;
    int c = INT_MAX;

    for (const int num : nums)
    {
      int d = num ^ k;
      a += std::max(num, d);
      if (d > num)
      {
        b++;
        c = std::min(c, d - num);
      }
      else
      {
        c = std::min(c, num - d);
      }
    }

    if (b % 2 == 0)
    {
      return a;
    }
    else
    {
      return a - c;
    }
  }
};
// 3086
//  FindTheMaximumSumofNodesValues