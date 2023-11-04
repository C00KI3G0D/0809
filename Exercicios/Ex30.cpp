#include <iostream> 

using namespace std;  

int main(){
    int num[9];
    int p = 0, im = 0;

        for(int i=0; i <=9; i++){

            cout << "INSIRA UM NUMERO " << i << endl;
            cin >> num[i];

            if (num[i]%2 ==0)
            {
                p++;
            } else{
                i++;
            }
            
    }
    cout << "Existem " << p << " numeros pares" << endl;
    cout << "Existem " << im << " numeros impares" << endl;
    
}