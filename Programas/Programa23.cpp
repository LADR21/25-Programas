#include<iostream>
using namespace std;
int leedato()
{
int i;
cin>>i;
return i;
 
}
 
int resta(int a, int b)
{
    if(a>b)
        return 1+resta(a,b+1);
    else
        if(b>a)
            return -1+resta(a+1,b);
        else
            return 0;
         
}
 
 
void calcularResta()
{
    int a,b,Resta;
     
        system("cls");
        cout<<"Ingrese a: ";
        a=leedato();
     
        system("cls");
        cout<<"Ingrese b: ";
        b=leedato();
     
        Resta=resta(a,b);
 
        cout<<"Resta: "<<a<<" - "<<b<<" = "<<Resta<<endl;
 
}
 
void main()
{
    calcularResta();
    cin.ignore();
}