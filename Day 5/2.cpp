class Solution {
public:
    void p(int index,vector<int>& nums,vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        set<int>s;
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1])
                continue;
            if(s.count(nums[i]))
                continue;
            s.insert(nums[i]);
            swap(nums[index],nums[i]);
            p(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>arr;
        //sort(nums.begin(),nums.end());
        p(0,nums,arr);
        //sort(arr.begin(),arr.end());
        return arr;
    }
};
