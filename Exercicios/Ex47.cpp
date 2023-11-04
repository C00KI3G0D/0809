#include <iostream>

using namespace std;

int main(){

    int vet[9];
    int num=0;
    bool swt= false;

    for (int i = 0; i <= 9; i++){
        cout <<"insira os numeros que quer no vetor: " << "no espaco-" << i << endl;
        cin >> vet[i];
    }

    cout << "Insira o numero de verificacao: " << endl;
    cin >> num;

    for (int i = 0; i <= 9; i++)
    {
        if(num == vet[i]){
            cout << "O numero foi econtrado na posicao: " << i << endl;
        }else{
            swt=true;
        }
    }
    if (swt=true)
    {
        cout << "numero nao econtrado." << endl;
    }
    
    

     
}