#include<iostream>
int res =0;
int burn time(node * root,int leaf,int &distance)
{
    if (root == NULL)return 0;
    if (root->data == leaf)
    {
        distance = 0;
        return 1;
    }
    int ld = burn time(root->left,leaf,distance);
    int rd = burn time(root->right,leaf,distance);
    if (ld != 0)
    {
        distance++;
        res = max(res,distance+rd);
        return ld+1;
    }
    else if (rd != 0)
    {
        distance++;
        res = max(res,distance+ld);
        return rd+1;
    }
    return 0;
}