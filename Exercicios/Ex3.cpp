#include <iostream>

using namespace std;

int main(){
    int peso, altura;
    double IMC;

    cout << "insira o peso" << endl;
    cin >> peso;

    cout << "insira a altura" << endl;
    cin>> altura;

    IMC = peso/2*altura;

    cout << "o IMC e: " << IMC << endl;

    return 0;
}

