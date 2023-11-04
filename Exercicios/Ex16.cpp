#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "insira o seu salario" <<endl;
    cin >> a;

    if (a>525){
        cout << "O seu salario foi atualizado. "<< a*1.1 << " e o seu novo salario. 10%"<< endl;

    }
    else if (a<=525){
         cout << "O seu salario foi atualizado. "<< a*1.5 << " e o seu novo salario. 15%"<< endl;

        
    }

}
