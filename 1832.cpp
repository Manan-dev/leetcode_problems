class Solution
{
public:
   bool checkIfPangram(string s)
   {
      set<char> ss(s.begin(), s.end());
      if (ss.size() < 26)
         return false;
      return true;
   }
};