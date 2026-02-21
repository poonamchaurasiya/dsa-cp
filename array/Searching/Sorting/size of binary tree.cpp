#include<iostream>
intget size(node*root)
{
    if (root==NULL)
    {
        return 0;
    }
    return 1+size(root->left)+size(root->right);
}