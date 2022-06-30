class Solution
{
public:
   bool isValid(string s)
   {
      deque<char> dq;
      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] == '(' || s[i] == '[' || s[i] == '{')
         {
            dq.push_front(s[i]);
         }
         else if (!(dq.empty()))
         {
            if (s[i] == ')' && dq[0] == '(')
               dq.pop_front();
            else if (s[i] == ']' && dq[0] == '[')
               dq.pop_front();
            else if (s[i] == '}' && dq[0] == '{')
               dq.pop_front();
            else
               return false;
         }
         else
         {
            return false;
         }
      }
      return dq.empty() ? true : false;
   }
};