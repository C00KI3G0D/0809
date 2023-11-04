#include <iostream>

using namespace std;

int main(){

    int val1, val2, sum=0;
    bool swt= false;

    do
    {
        cout << "insira o valor 1(inicial): " << endl;
        cin >> val1;
    
        cout << "insira o valor 2(final): " << endl;
        cin >> val2;

    if (val1 <val2)
    {
        for (int i = val1; val1 <=val2 ; val1++ ){
            
            sum= sum+val1;
            
            swt= true;
        }
        
    }else{
        cout <<"o primeiro valor deve ser maior que o primeiro!" << endl;
    }
    } while (swt !=true);
    
        cout << "A soma de todos os numeros entre o intervalo e de: " << sum <<endl;
    
    
    
}