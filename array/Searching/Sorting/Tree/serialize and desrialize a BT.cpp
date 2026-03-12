#include <iostream>
count int EMPTY = -1;
void secrifice(node *root,vector<int>&arr)
{
    if (root ==null)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->data);
    secrifice(root->left,arr);
    secrifice(root->right,arr);
}