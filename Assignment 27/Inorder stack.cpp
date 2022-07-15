class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) {
     stack<TreeNode*>s;
     TreeNode*node=root;
     vector<int>ans;   
      while(true){    

    if (node != NULL)
    { 
    s.push(node);
     node=node->left;   
        }
          else{
              if(s.empty()==true) break;
              node=s.top();
              s.pop();
              ans.push_back(node->val);
              node=node->right;
          }
       
      }
        return ans;

    } 
};
