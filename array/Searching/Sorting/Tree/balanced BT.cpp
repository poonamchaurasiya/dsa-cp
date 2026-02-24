#include<iostream>
bool is balanced(node * root)
{
    if (root==NULL)
    {
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if (abs(lh-rh)>1)
    {
        return false;
    }
    return is balanced(root->left) && is balanced(root->right);
}