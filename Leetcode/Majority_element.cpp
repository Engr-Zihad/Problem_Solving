class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans =0,count=0,freq=0;
        for(int val : nums)
        { 
            if(freq==0)
            {
                ans=val;
            }
            if(ans==val)
            {
                freq++;
            }
            else 
            {
                freq--;
            
            }
        }
        for(int val : nums)
        {
            if(val==ans)
            {
                count++;
            }
        }
        if(count>nums.size()/2)
        {
            return ans;
        }
        else
        {
            return -1;
        }
        
    }
};
