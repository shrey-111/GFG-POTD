class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
    vector<int> res;
        if(!root)
            return res;
            
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size(), sum = 0;
            
            while(n--) {
                auto p = q.front();
                q.pop();
                
                while(p) {
                    sum += p->data;
                    
                    if(p->left)
                        q.push(p->left);
                        
                    p = p->right;
                }
            }
            
            res.push_back(sum);
        }
        
        return res;
    }
};