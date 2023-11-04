#include <iostream> 

using namespace std;  

int main(){

    int v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,opc,c=0;

    do{
    
    cout << "insira em quem quer votar." << endl;
    cout << "1.Vote no codigo: " << "votos atuais: " << v1 << endl;    
    cout << "2.Vote no codigo: " << "votos atuais: " << v2 << endl;   
    cout << "3.Vote no codigo: " << "votos atuais: " << v3 << endl;   
    cout << "4.Vote no codigo: " << "votos atuais: " << v4 << endl;
    cout << "5.Voto nulo: "      << "votos atuais: " << v5 << endl;
    cout << "6.Voto em branco: " << "votos atuais: " << v6 << endl;
    cout << "SAIR.0: " << endl;

    cin >> opc;
   
    switch (opc)
    {
    case 1:
        v1++;
        break;
    case 2:
        v2++;
        break;
    case 3:
        v3++;
        break;
    case 4:
        v4++;
        break;
    case 5:
        v5++;
        break;
    case 6:
        v6++;
        break;    
    
    default:
        break;
    }
    }while(opc!=0);

    


}