class Solution
{
public:
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    bool doesAliceWin(string s)
    {
        int n_vowels = 0;
        for (auto &c : s)
        {
            for (auto &v : vowels)
            {
                if (c == v)
                {
                    n_vowels++;
                    break;
                }
            }
        }

        return (n_vowels > 0);
    }
};