class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = 0, z = 0, l = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) z++;
            
            while (z > 1) {
                if (nums[j] == 0) z--;
                j++;
            }
            
            l = max(l, i - j);
        }
        
        return l;
    }
};