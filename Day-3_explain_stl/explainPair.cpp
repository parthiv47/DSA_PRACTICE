#include<bits/stdc++.h>
// #include<math.h> we don/t need to write it beacause all ready we include above library
// #include<string.h>
using namespace std;
int main()
{
    pair<int,int> p={1,3};//we can only store two variable
    cout<<p.first<<" "<<p.second<<endl;
     pair<int,pair<int,int>> p1={1,{4,3}};//if we want to store more than 2
     cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

     pair<int,int>arr[]={{2,3},{3,4},{5,6}};
     cout<<arr[0].second<<" "<<arr[0].first<<endl;


    return 0;
}
