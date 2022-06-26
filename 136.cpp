class Solution
{
public:
   int singleNumber(vector<int> &nums)
   {
      int ori = 0;
      int n = nums.size();
      for (int i = 0; i < n; i++)
      {
         ori ^= nums[i];
      }
      return ori;
   }
};