//uri 1019 solve
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s;
    h=0;
    m=0;
    s=0;
    cin>>s;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;


}

