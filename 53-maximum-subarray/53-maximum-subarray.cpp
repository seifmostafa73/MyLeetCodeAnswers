class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        
        int sum =  -20000;
        int maxSum = -20000;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] > sum + nums[i] ) // start a new subarray from this element
            {
                sum = nums[i];
            }
            else // add the new element to the current sum
            {
                sum += nums[i];
            }
            
            if(sum>maxSum)
            {
                maxSum = sum;
            }
        }
        return maxSum;
    }
};

//burte force O(n^2) 
/*
public class Solution {
    public int MaxSubArray(int[] nums) {
     int maxSum = int.MinValue;
     int localSum = 0;
        
        for(int start = 0;start < nums.size();start++)
        {   localSum = 0;
            for(int end = start;end < nums.size();end++)
            {
                localSum+=nums[end];
                if (localSum > maxSum)
                {
                    maxSum = localSum;
                }
            }
        }
        return maxSum;
    }   
}
*/