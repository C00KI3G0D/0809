#include <iostream>
using namespace std;

int main()
{
    int vet[9],nPos[9];
    int countN=0, sumP=0;
   
   for (int i = 0; i <= 9; i++)
   {
    cout << "insira numeros: " << endl;
      cin >> vet[i];
       
        if(vet[i] >0){
          nPos[i] = vet[i];
          sumP= sumP+vet[i];
        }else if(vet[i] <0){
          countN++;
        }
    
   }
   
     
    cout << "Quantidade de negativos: " << countN << endl;
    cout << "Esta e a soma dos positivos: " << sumP << endl;
}