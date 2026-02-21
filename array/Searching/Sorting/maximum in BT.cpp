#include<iostream>
intgetmaximum(node*root)
{
    if (root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->left),maximum(root->right)));
}