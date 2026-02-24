#include<iostream>
int max width(node * root)
{
    if (root==NULL)
    {
        return 0;
    }
    queue<node*> q;
    q.push(root);
    int res=0;
    while (!q.empty())
    {
        int count=q.size();
        res=max(res,count);
        for (int i = 0; i < count; i++)
        {
            node * temp=q.front();
            q.pop();
            if (temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if (temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        
    }
    return res;
}