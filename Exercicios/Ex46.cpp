#include <iostream>

using namespace std;

int main(){

    int sum=0,media=0,nZeros=0, num=0,positivos=0,negativos=0;
    double pZeros=0, pPositivos=0, pNegativos=0, cont=0;

    do
    {
        
        cout << "Media dos numeros: " << media << endl;
        cout << "Quantidade de positivos: " << positivos << endl;
        cout << "Quantidade de negativos: " << negativos << endl;
        cout << "Percentagem de positivos: " << pPositivos << endl;
        cout << "Percentagem de negativos: " << pNegativos << endl;
        cout << "N.Zeros: " << nZeros << endl;
        cout << "%.Zeros: " << pZeros << endl;
        //variaveis de 0 adicionadas para não gerar confusão
        cout << "insira um numero: " << endl;
        cin >> num;
        cont++;
        
        
            if (num >0)
            {
                positivos++;
                sum=sum+num;
            }
            else if (num <0){
                negativos++;
                sum = sum+num;
            }
            else if (num==0){
                cont++;
                nZeros++;
                
            }
        pPositivos= (positivos*100)/cont;
        pNegativos= (negativos*100)/cont;
        pZeros= (nZeros*100/cont);
        media= (sum/cont);

            
        
    } while (1==1);
    


}