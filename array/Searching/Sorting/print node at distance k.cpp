#include <iostream>
void print distance(node* root,int k)
{
    if (root==NULL)
    {
        return;
    }
    if (k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    print distance(root->left,k-1);
    print distance(root->right,k-1);
}