#include<bits/stdc++.h>
using namespace std;
int main()
{
    float code1,code2;
    float unit1, unit2, price1,price2 ;
    float pay1 ,pay2,pay;
    cin>>code1>>unit1>>price1>>code2>>unit2>>price2;
    pay1 = unit1*price1;
    pay2 = unit2*price2;
    pay= pay1+pay2;
    cout<<fixed;
    cout<<"VALOR A PAGAR: R$ "<<setprecision(2) ;
    cout<< pay<<endl;




}

