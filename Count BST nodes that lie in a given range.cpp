class Solution{
public:
    
    void solve(Node *root, int& cnt, int l, int h)
    {
        if(root == NULL){
            return ;
        }
        
        if(root->data >= l && root->data <= h){
            cnt++;
        }
        
        solve(root->left,cnt,l,h);
        solve(root->right,cnt,l,h);
    }
    int getCount(Node *root, int l, int h)
    {
        int cnt = 0;
        if(root == NULL){
            return cnt;
        }
        
        solve(root,cnt,l,h);
        return cnt;
    }
};
