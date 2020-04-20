class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> m;
        
        // Storing Vector elements in a map as "Key" and Index of the elements as "Value"
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]] = i;
        }
        
        // Vector for storing the answer
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            // Check if the pair exists or not, provided both the elements have different index.
            if((m.find(target-nums[i]) != m.end()) && (i != m[target-nums[i]]))
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                return ans;
            }
        }
        
        return ans;
    }
};
