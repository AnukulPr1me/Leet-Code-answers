class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result;
        vector<int> positive_nums, negative_nums;

        for (int num : nums) {
            if (num >= 0) {
                positive_nums.push_back(num);
            } else {
                negative_nums.push_back(num);
            }
        }

        int i = 0, j = 0;
        while (i < positive_nums.size() && j < negative_nums.size()) {
            result.push_back(positive_nums[i++]);
            result.push_back(negative_nums[j++]);
        }

        
        while (i < positive_nums.size()) {
            result.push_back(positive_nums[i++]);
        }

        return result;
    }
};
