class solution{
    public:
    vector <int> search(string pattern, string text)
        {
            //code here.
             int n=text.size();
            int m=pattern.size();
            
            vector<int>res;
            
            for(int i=0;i<n-m+1;i++){
                if(pattern==text.substr(i,m))
                res.push_back(i+1);
            }
            return res;
        
        }
    };