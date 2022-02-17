class Solution {
public:
    void f(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            ds.push_back(nums[i]);
            f(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>&arr){
        vector<int>ds;
        vector<vector<int>>ans;
  	    sort(arr.begin(),arr.end());	
	    f(0,arr,ds,ans);
        return ans;
    }
};
