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
/*enero*/       case 1:if(dia<21) cout<<"Capricornio"<<endl;
                        else      cout<<"Acuario"<<endl;break;
 
/*febrero*/     case 2:if(dia<21) cout<<"Acuario"<<endl;
                        else      cout<<"Piscis"<<endl;break;
 
/*marzo*/       case 3:if(dia<21) cout<<"Piscis"<<endl;
                        else      cout<<"Aries"<<endl;break;
 
/*abril*/       case 4:if(dia<21) cout<<"Aries"<<endl;
                        else      cout<<"Tauro"<<endl;break;
 
/*mayo*/        case 5:if(dia<22) cout<<"Tauro"<<endl;
                        else      cout<<"Geminis"<<endl;break;
 
/*junio*/       case 6:if(dia<22) cout<<"Geminis"<<endl;
                        else      cout<<"Cancer"<<endl;break;
 
/*julio*/       case 7:if(dia<23) cout<<"Cancer"<<endl;
                        else      cout<<"Leo"<<endl;break;
 
/*agosto*/      case 8:if(dia<23) cout<<"Leo"<<endl;
                        else      cout<<"Virgo"<<endl;break;
 
/*septiembre*/  case 9:if(dia<24) cout<<"Virgo"<<endl;
                        else      cout<<"Libra"<<endl;break;
 
/*octubre*/     case 10:if(dia<25)cout<<"Libra"<<endl;
                        else      cout<<"Escorpio"<<endl;break;
 
/*noviembre*/   case 11:if(dia<23)cout<<"Escorpio"<<endl;
                        else      cout<<"Sagitario"<<endl;break;
 
/*diciembre*/   case 12:if(dia<22)cout<<"Sagitario"<<endl;
                        else      cout<<"Capricornio"<<endl;break;
 
                default:cout<<"INGRESE UNA FECHA VALIDA"<<endl;
      }
cin.ignore();return 0;
}