#include<bits/stdc++.h>
using namespace std;
class MyStack{
    vector<int>v;
    public:
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
    int empty()
    {
    return v.empty();
    }
    int size()
    {
        return v.size();
    }

};

int main()
{
  MyStack st;
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }
  while(!st.empty())
  {
    cout<<st.top()<<" ";
    st.pop();
  }
    return 0;
}