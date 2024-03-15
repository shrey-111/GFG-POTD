class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
         vector<vector<int>> left(n,vector<int>(n,0));  
        vector<vector<int>> top(n,vector<int>(n,0));
        int ans = 0, minX = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j]=='X')
                {
                    if(i!=0)
                    {
                        top[i][j] = 1 + top[i-1][j];
                    }
                    else
                    {
                       top[i][j] = 1;
                    }
                    if(j!=0)
                    {
                        left[i][j] = 1 + left[i][j-1];
                    }
                    else
                    {
                        left[i][j] = 1;
                    }
                }
                minX=min(top[i][j],left[i][j]);
                while(minX)
                {
                    int k = i-minX+1;
                    int l = j-minX+1;
                    if(left[k][j] >= minX && top[i][l] >= minX)
                    {
                        ans = max(ans,minX);
                        break;
                    }
                    minX--;
                }
            }
        }
        return ans;
    }
};