#include<iostream>
bool find path(node *root,vector<int> &path,int k)
{
    if (root == NULL)return false;
    path.push_back(root->data);
    if (root->data == k)return true;
    if (find path(root->left,path,k) || find path(root->right,path,k))return true;
    path.pop_back();
    return false;
}