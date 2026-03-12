#include<iostream>
void itrativepreorder(node*root)
{
    if (root==NULL)
    {
        return;
    }
    stack<node*>s;
    s.push(root);
    while (!s.empty())
    {
        node* curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        if (curr->right!=NULL)
        {
            s.push(curr->right);
        }
        if (curr->left!=NULL)
        {
            s.push(curr->left);
        }
    }
}