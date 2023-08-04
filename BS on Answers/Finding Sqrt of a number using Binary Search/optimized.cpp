class Solution{
  public:
    long long good(long long int m, long long int x ) {
        long long int value = m*m;
        return value <= x;
    }
    long long int floorSqrt(long long int x) 
    {
        // Optimized solution
        // TC: O(logx), SC:O(1)
        if(x == 1) return 1;
        long long int l = 0;
        long long int r = x;
        while(l+1<r) {
            long long int m = (l+r)/2;
            // Since we know that if m*m <= x is good this means we are approaching to it's value from l -> m as m is more near to sqrt(x)
            if(good(m,x)) {
                l = m;
            } else {
                r = m;
            }
        }
        return l;
    }
};
