#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    // st.pop();
    //  cout<<st.top()<<endl;
    //  st.pop();
    //  cout<<st.top()<<endl;
    //  st.pop();
    //  cout<<st.top()<<endl;
    //  st.pop();
     if(!st.empty())
     cout<<st.top()<<endl;
     if(!st.empty()==true)
       st.pop();
     cout<<st.top()<<endl;  
    return 0;
}