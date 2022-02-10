 void solve(int start, vector<int>&res, int n, int k,vector<vector<int>>&ans) {
        if(res.size()==k) {
            ans.push_back(res);
            return;
        }
        for(int i=start; i<=n; i++) {
            res.push_back(i);
            solve(i+1,res,n,k,ans);
            res.pop_back();
        }
        return;
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(1,res,n,k,ans);
        return ans;
    }
