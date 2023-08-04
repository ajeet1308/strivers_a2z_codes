class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Brute force 
        // TC: O(sqrt(N)), SC: O(1)
        int ans = 0;
        int i = 0;
        for(;i<=x;i++){
            if((long long)i*i > x) {
                ans = i-1;
                break;
            } else {
                ans = i;
            }
        }
        return ans;
    }
};
