#include<iostream>
using namespace std;
 
void main()
{int ciclo, creditos, totalcreditos, maxcred, mincred=12, matricreditos=0,cantcursos=0;
char op;
 
    do{
        cout<<"Ingrese ciclo: ";
        cin>>ciclo;
        if(ciclo<=0 || ciclo>10)
            cout<<"Vuelva a ingresar"<<endl;
    }while(ciclo<=0 || ciclo>10);
 
    switch(ciclo)
    {
        case 1:
        case 4:
        case 7: maxcred=20;
        case 2:
        case 3:
        case 8: maxcred=22;
        case 5:
        case 6:
        case 9:
        case 10: maxcred=24;
    }
    totalcreditos=maxcred;
    do{
        do{
            cout<<"Ingrese creditos: ";
            cin>>creditos;
            if(creditos<=0 || creditos>maxcred)
                cout<<"Vuelva a ingresar";
        }while(creditos<=0 || creditos>maxcred);
         
        while(matricreditos<=maxcred && totalcreditos>0 && creditos<=totalcreditos)
        {
            totalcreditos=totalcreditos-creditos;
            matricreditos=matricreditos+creditos;
            cantcursos++;
            if(matricreditos<mincred)
                do{
                    cout<<"El minimo de creditos es "<<mincred<<endl<<"Ingrese mas creditos: ";
                    cin>>creditos;
                    if(creditos<=0 || creditos>maxcred)
                        cout<<"Vuelva a ingresar";
                }while(creditos<=0 || creditos>maxcred);
            else
            {
                break;
            }
             
        }
        if(totalcreditos>0)
        {   
            cout<<"Desea matricular otro curso? (s,n): ";
            cin>>op;
        }
        else
            break;
}while(op=='s');
 
if(creditos>totalcreditos && creditos>maxcred)
{
    cout<<"Excede maximo"<<endl;
    cout<<"Ciclo matriculado: "<<ciclo<<endl;
    cout<<"Cantidad cursos: "<<cantcursos<<endl;
    cout<<"Cantidad Creditos Matriculados: "<<matricreditos<<endl;
    cout<<"Cantidad Creditos Quedan: "<<totalcreditos<<endl;
}
else
    {
        cout<<"Ciclo matriculado: "<<ciclo<<endl;
        cout<<"Cantidad cursos: "<<cantcursos<<endl;
        cout<<"Cantidad Creditos Matriculados: "<<matricreditos<<endl;
        cout<<"Cantidad Creditos Quedan: "<<totalcreditos<<endl;
    }
system("pause");
 
}