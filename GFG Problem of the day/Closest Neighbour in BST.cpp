class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        int ans;
        //Check if left most node has value smaller than n or not, if is greater than n return -1;
        Node *curr = root;
        while(curr->left){
            curr = curr->left;
        }
        if(curr->key > n) return -1;
        //checking for perfect node for ans
        curr = root;
        while(curr){
            if(curr->key>n){
                curr = curr->left;
               
            }
            else{
                ans = curr->key;
                curr = curr->right;
                
            }
        }
        return ans;
    }
};