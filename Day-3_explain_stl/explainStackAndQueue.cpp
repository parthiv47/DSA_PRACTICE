#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    st.push(10);
    st.push(3);
    st.push(5);
    st.push(6);
    st.push(68);

    cout<< st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<< st.top()<<endl;
    cout<<st.empty()<<endl;
    stack<int>st1,st2;

    queue<int>q;
    q.push(34);
    q.push(45);
    q.push(46);
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    
    return 0;
}