class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // Optimized solution
        // TC: O(logN) SC: O(1)
        int n = nums.size();
        if(n==1) return 0;
        int l = 0, h = n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(m<n-1 && nums[m]<nums[m+1]){
                // Everything goes good so go on as if we end up at n-1 position also then as well
                // we will get an answer that is n-1 because since nums[n-2] < nums[n-1] as per
                // above condition and since it would be last element and nums[n] = -infinity 
                // hence we will still get our answer
                l = m+1;
            }
            else h=m-1;
        }
        return l;
    }
};
