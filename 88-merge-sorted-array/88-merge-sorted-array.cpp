class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m ==0)
            nums1 = nums2;
      int index = n+m-1;
        m--;
        n--;
      while(index > -1 && m>-1 && n>-1)
      {
          if(nums2[n] > nums1[m])
          {
              nums1[index] = nums2[n];
              n--;
          }
          else
          {
              nums1[index] = nums1[m];
              m--;
          }

                index --;
        }
        while(index > -1 && m >-1)
        {
             nums1[index] = nums1[m];
              m--;
              index --;   
        }
         while(index > -1 && n >-1)
        {
             nums1[index] = nums2[n];
              n--;
              index --;
            
        }
    }
};