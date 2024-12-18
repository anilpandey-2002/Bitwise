class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        return sum(nums, 0, 0);
    }

private:
    int sum(const vector<int> &nums, int index, int a)
    {
        if (index == nums.size())
        {
            return a;
        }

        int b = sum(nums, index + 1, a ^ nums[index]);

        int c = sum(nums, index + 1, a);

        return b + c;
    }
}; // 1863
// Sum of All Subset XOR Totals