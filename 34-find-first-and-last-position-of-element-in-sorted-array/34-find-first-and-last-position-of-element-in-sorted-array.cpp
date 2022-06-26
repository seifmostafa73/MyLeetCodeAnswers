class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        if(nums.size() == 0)
        {
            return notFound();
        }
        
        vector<int> V;
        int lastindex = nums.size()-1; 
        int lastelement = nums[lastindex];
        int firstelement = nums[0];
        
        //if it's first element 
        if(target == nums[0])
        {
                V.push_back(0);

            for(int i =1;i<nums.size();i++)
            {
                if(nums[i]!= target)
                {
                    V.push_back(i-1);
                    return V;
                }
            }
            V.push_back(lastindex);
            return V;
        }
        
        //Last element
        if(target == lastelement)
        {

            for(int i =lastindex;i>=0;i--)
            {
                if(nums[i]!= target)
                {
                        V.push_back(i+1);
                        V.push_back(lastindex);
                        return V;
                }
            }
        }

        //middle element
        int firstindex = 0;
        int middle = -1;
        while(firstindex >-1 && lastindex < nums.size() )
        {   
            
            if( middle == (int)(lastindex+firstindex)/2 || lastindex <= firstindex) 
            {// this means you already searched all available indeces and couldn't find it.
                return notFound();
            }
            middle = (lastindex+firstindex)/2;
            std::cout<<middle<<"\t";
            if(target > nums[middle])
            {
                firstindex = middle;
            }else if(target < nums[middle])
            {
                lastindex = middle;
            }
            else{
                std::cout<<"\n";
                break;
            }
        }
//now we have an index htat has the target , but we need to find first appearnace and last appearnce of target from that index 
        V.push_back(findFirstAppearance(middle,nums));
        V.push_back(findLastAppearance(middle,nums));
        

        return V;
    }
    int findFirstAppearance(int start,vector<int> nums)
    {
        while(nums[start] == nums[start-1])
        {
            start = start-1;
        }
        return start;
    }
    int findLastAppearance(int start,vector<int> nums)
    {
        while(nums[start] == nums[start+1])
        {
            start = start+1;
        }
        return start;
    }
    
    vector<int> notFound()
    {
        vector<int> not_found_vector ;
        not_found_vector.assign(2,-1);
        return not_found_vector; 
    }
};