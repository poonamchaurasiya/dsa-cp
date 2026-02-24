#include<iostream>
node * prev = NULL;
{
    if(root ==NULL)return root;
    node * head = convert(root->left);
    if(prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    convert(root->right);
}