#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,x;
    cin>>a>>b>>c;
    if((a+b>c && b+c> a && a+c>b))
    {
        x=a+b+c;
        printf("Perimetro = %.1f\n",x);
    }
    else
    {
        x= ( (a+b)*c)/2;
        printf("Area = %.1f\n",x);
    }


    return 0;
}


