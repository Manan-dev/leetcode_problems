class Solution
{
public:
    int countPoints(string rings)
    {
        int n = rings.size();

        int red[10] = {0};
        int green[10] = {0};
        int blue[10] = {0};

        for (int i = 0; i < n; i += 2)
        {
            if (rings[i] == 'R')
            {
                red[rings[i + 1] - '0'] = 1;
            }
            else if (rings[i] == 'G')
            {
                green[rings[i + 1] - '0'] = 1;
            }
            else if (rings[i] == 'B')
            {
                blue[rings[i + 1] - '0'] = 1;
            }
        }

        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (red[i] == 1 && green[i] == 1 && blue[i] == 1)
            {
                ans++;
            }
        }
        return ans;
    }
};
