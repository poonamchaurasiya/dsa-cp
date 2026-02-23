#include<iostream>
int maxlevel=0;
void leftview(node*root,int level)
{
    if (root==NULL)
    {
        return;
    }
    if (maxlevel<level)
    {
        cout<<root->data<<" ";
        maxlevel=level;
    }
    leftview(root->left,level+1);
    leftview(root->right,level+1);
}