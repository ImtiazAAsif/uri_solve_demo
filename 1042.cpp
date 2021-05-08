#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,l,m,s,temp;
    cin>>x>>y>>z;

    l=x;
    m=y;
    s=z;
    if (x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if (x>z)
    {
        temp = x;
        x=z;
        z=temp;
    }
    if (y>z)
    {
        temp=y;
        y=z;
        z= temp;

    }

    cout<<x<<endl<<y<<endl<<z<<"\n";
    cout<<"\n";
    cout<<l<<endl<<m<<endl<<s<<endl;




    return 0;
}


