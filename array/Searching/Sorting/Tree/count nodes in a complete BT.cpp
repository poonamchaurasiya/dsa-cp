#include <iostream>
int count nodes(root *root)
{
    int ih =0,rh =0;
    node *curr = root;
    while (curr != NULL)
    {
        ih++;
        curr = curr->left;
    }
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (ih == rh)return (1<<ih)-1;
    else return 1+count nodes(root->left)+count nodes(root->right);
}