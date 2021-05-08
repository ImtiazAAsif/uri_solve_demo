//uri 1036
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y,z,k ;
    scanf("%lf %lf %lf",&a,&b,&c);
    k = 4*a*c;
    x= (b*b - k);
    y=(-b + sqrt(x))/(a+a);
    z=(-b - sqrt(x))/(a+a);
    if(a==0 || x<0 )
    {
        printf("Impossivel calcular\n");


    }
    else
    {
        printf("R1 = %.5lf\n",y);
        printf("R2 = %.5lf\n",z);

    }


    return 0;

}

