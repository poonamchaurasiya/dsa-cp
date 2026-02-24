#include <iostream>
int pre inoredr =0;
node * tree(int in [],int pree[],int is,int ie)
{
    if (is>ie)
    {
        return NULL;
    }
    node * root=new node(pree[pre inoredr++]);
    int in index=-1;
    for (int i = is; i <= ie; i++)
    {
        if (in[i]==root->data)
        {
            index=i;
            break;
        }
    }
    root->left=tree(in,pree,is,index-1);
    root->right=tree(in,pree,index+1,ie);
    return root;
}