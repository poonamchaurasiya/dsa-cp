#include<iostream>
void itrativeinorder(node*root)
{
    if (root==NULL)
    {
        return;
    }
    stack<node*>s;
    node* curr=root;
    while (!s.empty() || curr!=NULL)
    {
        while (curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}