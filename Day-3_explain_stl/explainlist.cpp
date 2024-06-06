#include<bits/stdc++.h>
using namespace std;
int main()
{
    //container list
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(45);
    auto it=ls.begin();
    cout<<*(it)<<endl;
    // rest functions same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap
    
    return 0;
}