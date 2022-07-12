 int height(Node* root) {
        
        if(!root){
            return 0;
        }
        if(!root->left && !root->right){
            return 0;
        }
    
        return 1+max(height(root->left),height(root->right));
    }
