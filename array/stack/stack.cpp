#include<iostream>
struct my_stack
    {vector <int >v;
    void push (int x ){
        v.push_back(x);
    }
    int pop(){
        int x = v.back();
        v.pop_back();
        return x;
    }
    int size (){
        return v.size();

}
bool is_empty(){
    return v.empty();
}
    }