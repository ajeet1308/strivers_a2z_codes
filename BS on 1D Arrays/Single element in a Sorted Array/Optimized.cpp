class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // O(logN) solution
        // Optimized solution
        int n = nums.size();
        int l = 0, h = n-1;
        while(l<=h){
            int pos = (l+h)/2;
            if((pos%2 == 0 && pos<n-1 && nums[pos]==nums[pos+1]) || (pos%2 && pos>0 && nums[pos]==nums[pos-1])) {
                l = pos+1;
                // Everything is going good
            }
            else {
                h = pos-1;
            }
        }
        return nums[l];
    }
};
