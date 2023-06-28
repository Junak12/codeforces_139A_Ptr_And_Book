#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    int n;
    cin>>n;
    int d1,d2,d3,d4,d5,d6,d7;
    cin>>d1>>d2>>d3>>d4>>d5>>d6>>d7;
    //int sum=d1+d2+d3+d4+d5+d6+d7;
    int sum=0;
    while(1)
    {
        sum=sum+d1;
        if(n<=sum)
        {
            cout<<"1"<<endl;
            return 0;
        }
        sum=sum+d2;
        if(n<=sum)
        {
            cout<<"2"<<endl;
            return 0;
        }
        sum=sum+d3;
        if(n<=sum)
        {
            cout<<"3"<<endl;
            return 0;
        }
        sum=sum+d4;
        if(n<=sum)
        {
            cout<<"4"<<endl;
            return 0;
        }
        sum=sum+d5;
        if(n<=sum)
        {
            cout<<"5"<<endl;
            return 0;
        }
        sum=sum+d6;
        if(n<=sum)
        {
            cout<<"6"<<endl;
            return 0;
        }
        sum=sum+d7;
        if(n<=sum)
        {
            cout<<"7"<<endl;
            return 0;
        }

    }
    return 0;
}
