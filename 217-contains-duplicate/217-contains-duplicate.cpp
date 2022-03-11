class Solution {
public:
  //Mapping O(n) , space O(n)
  
      bool containsDuplicate(vector<int>& nums) {
        std::map<int,bool> _map;
        for(int i =0;i<nums.size();i++)
          {
            if(_map[nums[i]]==true)
            {return true;}
            _map[nums[i]] = true;
          }
        
        return false;
      }

  /*Simple O(n2) , space O(1)
    bool containsDuplicate(vector<int>& nums) {
        for(int i =0;i<nums.size();i++)
        {
          for(int j=i+1;j<nums.size();j++)
            if(nums[i] == nums[j])
              return true;
        }
      return false;
    }*/
};