#include<iostream>
using namespace std;
int main()
{
int a,b,c,x;
cout<<"ingrese tres numeros"<<endl;
cin>>a>>b>>c;
if (a<b) {x=a;a=b;b=x;}
if (a<c) {x=a;a=c;c=x;}
if (b<c) {x=b;b=c;c=x;}
cout<<"el termino medio es:  "<<b<<endl;
cin.ignore();return 0;
}