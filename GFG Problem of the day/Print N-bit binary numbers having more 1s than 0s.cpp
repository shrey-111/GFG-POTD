class Solution{
public:	
	void solve(string temp,set<string>& s,int c,int c1,int n)
{
    if(temp.length()==n)
    {
        if(s.find(temp)==s.end() && c>=c1)
        {
            s.insert(temp);
        }
        return;
    }
    solve(temp+"1",s,c+1,c1,n);
    if(c1+1<=c)
    {
    solve(temp+"0",s,c,c1+1,n);
    }
}
    vector<string> NBitBinary(int n)
    {
        string temp="";
        set <string>s;
        solve(temp,s,0,0,n);
        vector<string> ans;
        for(auto i: s)
        {
            ans.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};