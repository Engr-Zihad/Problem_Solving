class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN,cs = 0;
        for( int val : nums)
        {
            cs += val;
            max_sum = max (cs,max_sum);

            if(cs <0)
            {
                cs =0;
            }
        }
        return max_sum ;
        
    }
    
};
