class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int st = *max_element(nums.begin(), nums.end());
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = end;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            int count = 1, sum = 0;

            for (int x : nums) {
                if (sum + x > mid) {
                    count++;
                    sum = x;
                } else {
                    sum += x;
                }
            }

            if (count <= k) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return ans;
    }
};