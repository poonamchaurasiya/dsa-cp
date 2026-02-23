#include<iostream>
void printlevel order line(node * root)
{
    if (root ==null )return;
    queue<node*>q;
    q.push(root);
    while (!q.empty())    {
        int size=q.size();
        for (int i = 0; i < size; i++)
        {
            node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if (curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if (curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
}