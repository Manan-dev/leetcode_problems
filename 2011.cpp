class Solution
{
public:
   int finalValueAfterOperations(vector<string> &operations)
   {
      int ans = 0;
      for (int i = 0; i < operations.size(); i++)
      {
         operations[i][1] == '+' ? ans++ : ans--;
      }
      return ans;
   }
};