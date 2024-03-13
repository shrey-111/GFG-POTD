class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
          int n = mat.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        bool flag = true;
        for(int i=0;i<mp.size();i++){
            if(flag){
                reverse(mp[i].begin(),mp[i].end());
            }
            ans.insert(ans.end(),mp[i].begin(),mp[i].end());
            flag = !flag;
        }
        return ans;
    }
};