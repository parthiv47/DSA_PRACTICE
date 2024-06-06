#include<bits/stdc++.h>
using namespace std;
int main()
{
    //priority datastructure not store value as linear ...it is stored based on priority
    //like assendindin and desending in integer ,character store in priority way
    priority_queue<int> pq;
    pq.push(47);
    pq.push(30);
    pq.push(45);
    pq.push(37);
    cout<<pq.top()<<endl; //print 47
    pq.pop();
    cout<<pq.top()<<endl; //print 45
    //minimum priority queue
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(47);
    pq1.push(30);
    pq1.push(78);

    cout<<pq1.top();
    return 0;
}