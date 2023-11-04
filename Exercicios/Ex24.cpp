#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "insira um numero"  << endl;
    cin >> a;

    if(a>=10){

        for (int i = 1; i <=a; i++)
        {
            if(i%2==0){
                cout << "estes numeros sao pares: " << i << endl;
            }
        }
        
    }else{
        cout << "insira um numero acima de 10." << endl;
    }

}