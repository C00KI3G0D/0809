#include <iostream>

using namespace std;

int main(){
    int val1=0, val2=0, sum=0;

    cout << "insira o valor 1: " << endl;
        cin >> val1;
    
        cout << "insira o valor 2: " << endl;
        cin >> val2;

   

    if (val1 <val2)
    {
        for (int i = val1; val1 <=val2 ; val1++){
            
            sum= sum+val1;
            
           
        }
        
    }else if (val1 > val2)
    {
        for (val1; val1 >= val2 ; val1--){
            
            
            sum= val1 + sum;
            
        }
    }
    
    
    
    cout << "A soma de todos os numeros entre o intervalo e de: " << sum <<endl;


}