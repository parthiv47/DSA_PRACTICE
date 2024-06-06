#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(45);
    dq.push_back(10);
    dq.emplace_back(20);

    dq.pop_back();
    dq.pop_front();
   cout<< dq.back();
   cout<<dq.front();
    auto it=dq.begin();
    cout<<*(it)<<endl;
    return 0;
}