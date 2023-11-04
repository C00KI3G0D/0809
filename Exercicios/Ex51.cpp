#include <iostream>
using namespace std;

int main()
{
    int opc=0, qEsp=0 ;
    string nome;
    bool found= false;
   
   
    cout << "insira o tamanho do vetor: " <<endl;
    cin >> qEsp;
    string nomes[qEsp];
   
    do{
      cout << "==========MENU=========" << endl;
      cout << "1) Registrar Nomes" << endl;
      cout << "2) Pesquisar um nome" <<endl;
      cout << "3) Listar todos os nomes" << endl;
      cout << "4) Sair do programa." << endl;
      cin >> opc;
     
      switch(opc){
        case 1:
           
            for (int i = 0; i <= qEsp; i++){
                cout << "insira o nome na posicao-" <<i<<endl;
                cin >> nomes[i];
            }
        break;
        case 2:
          cout << "insira o nome que deseja pesquisar" << endl;
          cin >> nome;
            for (int i = 0; i <= qEsp; i++){
               
                if(nome == nomes[i]){
                    found= true;
                }
           
            }
                if (found==true){
                    cout << "Econtrado" << endl;
           
                }else if(found ==false){
                    cout << "Nao econtrado" << endl;
                }
               
            break;
        case 3:
        for (int i = 0; i <= qEsp; i++){
            cout <<nomes[i] <<endl;

          }
        break;
        case 4:
        break;
      }
    }while(opc!=4);
 
}