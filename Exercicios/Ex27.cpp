#include <iostream>

using namespace std;

int main(){
      int num;
 
  int d, f;
 
  for(int i = 0; i<= 9; i++){
      cout << "insira o numero: " << i << endl;
      cin >> num;
      if (num >=10 && num <=20) {
          d++;

      }else{
          f++;
        }
    }
  cout << "Os numeros que estão dentro do intervalo são: " << d << endl;
  cout << "Os numeros que estão fora do intervalo são: " << f << endl;
}