#include<bits/stdc++.h>

using namespace std;
int main()
{
    float s,ts,ns;
    //s=salary
    //a= new salary

    cin>>s;
    if (s >= 0.00 && s<=400.00)
    {
        ts = ((15*s)/100);
        ns=s+ts;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ts);
        printf("Em percentual: 15 %%\n");
    }
    else if (s >= 400.01 && s<=800.00)
    {
        ts = ((12*s)/100);

        ns=s+ts;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ts);
        printf("Em percentual: 12 %%\n");
    }

    else if (s >= 800.01 && s<=1200.00)
    {
        ts = ((10*s)/100);

        ns=s+ts;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ts);
        printf("Em percentual: 10 %%\n");
    }

    else if (s >= 1200.01 && s<=2000.00)
    {
        ts = ((7*s)/100);

        ns=s+ts;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ts);
        printf("Em percentual: 7 %%\n");
    }

    else if ( s>2000.00)
    {

        ts = ((4*s)/100);

        ns=s+ts;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ts);
        printf("Em percentual: 4 %%\n");
    }

return 0 ; }

