class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // O(N) solution
        // xor solution
        int xo = 0;
        for(auto it:nums) xo^=it;
        return xo;
    }
};
