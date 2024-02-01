class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int m = 0;
        int n = numbers.size() - 1;

        while(m < n) {
            if(numbers[m] + numbers[n] == target) {
                return {m+1, n+1};
            }
            else if(numbers[m] + numbers[n] < target) {
                m++;
            }
            else {
                n--;
            }
        }
        
        return {};
    }
};
