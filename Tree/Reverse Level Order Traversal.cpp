// The idea is to use a stack and a queue.
    //Do something like normal level order traversal order. Following are the 
    // differences with normal level order traversal 
    // 1) Instead of printing a node, we push the node to stack 
    // 2) Right subtree is visited before left subtree 
   
void reversePrint(Node *root)
{
    //Your code here
    stack<Node *> s;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        s.push(root);
        if(root->right)
        q.push(root->right);
        if(root->left)
        q.push(root->left);
    }
    while(!s.empty())
    {
        root=s.top();
        cout<<root->data<<" ";
        s.pop();
    }
}
