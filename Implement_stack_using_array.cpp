#include<bits/stdc++.h>
using namespace std;

class myStack
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

};

int main()
{
    return 0;
}