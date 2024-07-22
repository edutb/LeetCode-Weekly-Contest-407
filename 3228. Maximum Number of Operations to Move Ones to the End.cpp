class Solution
{
public:
    int maxOperations(string s)
    {

        int ans = 0;
        int n_ones = 0;

        for (int i = 0; i < s.size(); i++)
        {
            n_ones += (s[i] - '0');
            if (i > 0 && s[i] < s[i - 1])
                ans += n_ones;
        }

        return ans;
    }
};