#include<bits/stdc++.h>
using namespace std;
int main()
{

    float x1,x2,y1,y2,a,b,distance;

    cin>>x1>>y1;
    cin>>x2>>y2;
    a= (x2-x1)*(x2-x1);
    b= (y2-y1)*(y2-y1);
    distance = a+b;
    distance=sqrt((a+b));
    printf("%.4f\n",distance);

}

