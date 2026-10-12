class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        int n = nums.size();

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mid == 0 || nums[mid] != nums[mid - 1]) {
                if (mid == n - 1 || nums[mid] != nums[mid + 1])
                    return nums[mid];
            }

            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1])
                    st = mid + 2;
                else
                    end = mid - 1;
            } else {
                if (nums[mid] == nums[mid - 1])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};