#include<iostream>
int hieght (node *root)
{
    if (root ==NULL)return 0;
    else return 1+max(hieght(root->left),hieght(root->right));
}