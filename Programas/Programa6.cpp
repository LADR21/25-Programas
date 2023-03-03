#include <iostream>
using namespace std;
int main()
{
      int mes, dia;
      cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
      cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
      cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
      cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
      cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o (dia y mes)"<<endl;
      cin>>dia>>mes;
      switch(mes)
      {
 
            case 1:
                switch(dia)
                {
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"acuario"<<endl;break;
                default:cout<<"capricornio"<<endl;}break;
            case 2:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"piscis"<<endl;break;
                default:cout<<"acuario"<<endl;break;}break;
            case 3:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"aries"<<endl;break;
                default:cout<<"piscis"<<endl;break;}break;
            case 4:
                switch(dia){
                   case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"tauro"<<endl;break;
                   default:cout<<"aries"<<endl;break;}break;
            case 5:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"geminis"<<endl;break;
                default:cout<<"tauro"<<endl;break;}break;
 
            case 6:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"cancer"<<endl;break;
                default:cout<<"geminis"<<endl;break;}break;
            case 7:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"leo"<<endl;break;
                default:cout<<"cancer"<<endl;break;}break;
            case 8:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"virgo"<<endl;break;
                default:cout<<"leo"<<endl;break;}break;
            case 9:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"libra"<<endl;break;
                default:cout<<"virgo"<<endl;break;}break;
            case 10:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"escorpio"<<endl;break;
                default:cout<<"libra"<<endl;break;}break;
            case 11:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"sagitario"<<endl;break;
                default:cout<<"escorpio"<<endl;break;}break;
            case 12:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"capricornio"<<endl;break;
                default:cout<<"sagitario"<<endl;break;}break;
 
      }
 
cin.ignore();return 0;
}