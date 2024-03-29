class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int candies = 0;
        int n = ratings.size();
        std::vector<int> left(n, 1);
        std::vector<int> right(n, 1);

        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }

        for (int i = 0; i < n; i++) {
            candies += std::max(left[i], right[i]);
        }

        return candies;
    }
};
