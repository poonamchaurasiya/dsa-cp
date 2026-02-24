#include <iostream>
void prespiral(node * root)
{
    if (root ==null)return;
    queue <node *> q;
    stack <int>s;
    q.push(root);
    bool ltr = true;
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node * temp = q.front();
            q.pop();
            if (ltr)
            {
                cout << temp->data << " ";
            }
            else
            {
                s.push(temp->data);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        if (!ltr)
        {
            while (!s.empty())
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        ltr = !ltr;
    }
}