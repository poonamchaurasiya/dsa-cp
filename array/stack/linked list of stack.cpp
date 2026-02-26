#include<iostream>
struct node {
    int data;
    node * next ;
    node (int d)
    {
        data = d ;
        next = null;
    }
};
struct my stack 
{
    node * top ;
    my stack ()
    {
        top = null;
    }
    void push (int x)
    {
        node * temp = new node (x);
        temp -> next = top ;
        top = temp ;
    }
    int pop ()
    {
        if (top == null)
        return -1;
        int x = top -> data ;
        node * temp = top ;
        top = top -> next ;
        delete temp ;
        return x ;
    }
}