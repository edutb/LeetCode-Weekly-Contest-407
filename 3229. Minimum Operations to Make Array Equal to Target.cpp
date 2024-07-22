class Solution
{
public:
    long long f(int l, int r, vector<int> &nums, vector<int> &target)
    {

        long long ans = 0;
        int cur = 0;

        for (int i = l; i <= r; i++)
        {
            nums[i] = abs(nums[i]);
            if (nums[i] > cur)
                ans += nums[i] - cur;
            cur = nums[i];
        }

        return ans;
    }

    long long minimumOperations(vector<int> &nums, vector<int> &target)
    {

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums[i] -= target[i];
        }

        int l, r;
        long long ans = 0;

        for (l = 0, r = 0; r < n; r++)
        {
            if (nums[l] > 0 && nums[r] > 0)
                continue;
            if (nums[l] == 0 && nums[r] == 0)
                continue;
            if (nums[l] < 0 && nums[r] < 0)
                continue;
            ans += f(l, r - 1, nums, target);
            l = r;
        }

        ans += f(l, n - 1, nums, target);
        return ans;
    }
};