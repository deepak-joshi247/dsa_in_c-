class Solution {
    void permutate(vector<vector<int>> &permute,vector<int>& nums,int index)
    {
        if(index>=nums.size())
        {
            permute.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++)
        {
            swap(nums[j],nums[index]);
            permutate(permute,nums,index+1);
            //backtracking
            swap(nums[index],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permute;
        
        int index=0;
        permutate(permute,nums,index);
        return permute;
    }
};
