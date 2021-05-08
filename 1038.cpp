#include<bits/stdc++.h>
using namespace std;
int main()
{
    int code , quantity ;
    double paid;

    cin>>code>>quantity;


    if (code == 1)
    {
        paid = quantity * 4.00;
    }
    else if (code ==2)
    {
        paid = quantity * 4.50;
    }
    else if (code == 3)
    {
        paid = quantity * 5.00;
    }
    else if (code == 4 )
    {
        paid = quantity * 2.00;
    }
    else if ( code == 5)
    {
        paid = quantity * 1.50;

    }
    printf("Total: R$ %.2lf\n",paid);


return 0;
}

