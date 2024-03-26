class Solution {
  public:
    bool isAdditiveSequence(string n) {
        // Your code here
        int a=0, b=0, t=0;
        for(int i=0; i<n.size(); i++){
            a*=10;
            a+=(n[i]-'0');
            b=0;
            
            for(int j=i+1; j<n.size(); j++){
                b*=10;
                b+=(n[j]-'0');
                int c=j+1;
                int ax=a, bx=b;
                while(c<n.size()){
                    
                int x=a+b;
               // cout<<i<<" "<<x<<endl;
                int l=0;
                int y=x;
                while(y){
                    y/=10;
                    l++;
                }
                
                if((c+l)>n.size()){
                    break;
                }
                int z=0;
                while(l--){
                    z*=10;
                    z+=(n[c]-'0');
                    c++;
                }
                
                if(z!=x){
                    break;
                }
                a=b;
                b=z;
                if(c==n.size()){
                    return true;
                }
                
                
                
                    
                    
                }
                
                a=ax;
                b=bx;
                
                
                
                
                
            }
            
            
            
            
            
            
            
        }
        
        return false;
        
    
    }
};