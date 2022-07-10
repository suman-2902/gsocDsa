void levelOrder(Node * root) {
    queue<Node *> res;
    Node* r = root;
   
    while( r!= NULL){
        cout << r->data << ' ';
        
        if( r->left  != NULL )
         res.push(r->left);
         
        if( r->right != NULL )
         res.push(r->right);
         
        if( !res.empty() ) {
         r = res.front();
         res.pop();
         
        } else {
         r = NULL;
        }
    }

    }

}
