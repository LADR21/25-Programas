int menor(int, int, int);
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cout<<"ingrese tres numeros\n";
    cin>>a>>b>>c;
    m=menor(a,b,c);
    cout<<"el menor es: "<<m<<endl;
    cin.ignore();return 0;
}
int menor(int a,int b,int c)
{
    int m;
    if(a<b)
        if(a<c)
            m=a;
        else
            m=c;
    else
        if(b<c)
            m=b;
        else
            m=c;
return m;
}