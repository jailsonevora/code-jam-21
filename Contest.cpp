class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int> jArr, ans;
        set<int> set;
        //for(int j = 0; j < nums.size(); j++)
          //  if(nums[j] == key)
            //    jArr.push_back(j);
        
        //for(int j = 0; j < jArr.size(); j++)
            for(int i = 0; i < nums.size(); i++)
                for(int j = 0; j < nums.size(); j++) 
                    if(abs(i-j) <= k && nums[j] == key)
                        set.insert(i);
        
        for(int s : set)
            ans.push_back(s);
                
        return ans;

    }
};