#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int>st; //store in sorted fashion
   st.insert(10);
   st.insert(20);
   st.insert(20);
   st.insert(30);

   auto it =st.find(10);
   
      cout<<*(it)<<endl;
   int cnt=st.count(20);
   cout<<cnt<<endl;
   st.erase(20);

   //explain map 
   map<int,int>mpp;
   //declaration
   mpp[1]=2;
   mpp.insert({2,4});

   for (auto it : mpp)
   {
      cout<<it.first<<" "<<it.second<<endl;
   }
   

  
    return 0;
}