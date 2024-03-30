class Solution {
  public:
    int minValue(Node* r) {
        if(!r->left) return r->data;
        return minValue(r->left);
}
};
     