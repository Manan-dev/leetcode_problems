class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= 'Z' && s[i] >= 'A')
            {
                s[i] = s[i] + ('a' - 'A'); // (97 -> a) - (65 -> A)
            }
        }
        return s;
    }
};