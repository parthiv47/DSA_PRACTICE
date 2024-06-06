#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n)
{
    int sum=0;
     int copy_n=n;
     while(n>0)
        {
            int ld=n%10;
            n=n/10;
            sum=sum+(ld*ld*ld);
          //  rev=(rev*10)+lastdigit;
        }
        if(copy_n==sum)
        {
            return true;
        }
        else{
            return false;
        }
}

bool checkPrime(int n)
{
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            if((n/i)!=i)
            cnt++;
        }
    }
    if()
}
int main()
{
    int n=572;
    cout<<isArmstrong(n);

    return 0;
}