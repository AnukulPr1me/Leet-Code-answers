class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> :: iterator a;
        a = nums.begin();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(a);
                a--;
                i--;
            }
            a++;
        }
        return nums.size();
        
    }
};