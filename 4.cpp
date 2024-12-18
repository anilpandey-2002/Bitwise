class Solution
{
public:
  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<vector<int>> a;
    vector<int> b;
    dfs(nums, 0, b, a);
    return a;
  }

private:
  void dfs(const vector<int> &nums, int s, vector<int> &b, vector<vector<int>> &a)
  {
    a.push_back(b);

    for (int i = s; i < nums.size(); ++i)
    {
      b.push_back(nums[i]);
      dfs(nums, i + 1, b, a);
      b.pop_back();
    }
  }
};
// 78
//  Subsets