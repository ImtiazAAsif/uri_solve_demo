//uri 46
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    if(a<b)
    {
    x= b-2;
    printf("O JOGO DUROU %d HORA(S)\n",x);


    }
else
{
x=(b+24)-a;
printf("O JOGO DUROU %d HORA(S)\n",x);

}



    return 0;
}


