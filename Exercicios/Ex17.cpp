#include <iostream>

using namespace std;

int main(){

    char a;
    int b;
    cout << "insira o plano " << endl;
    cin >> a;

    cout << "insira o seu salario " << endl;
    cin >> b;


    switch(a){
        case 'A':
        cout << "o seu novo salario e de " << b*1.1 << endl;
        break;
        case 'a':
        cout << "o seu novo salario e de " << b*1.1 << endl;
        break;

        case 'B':
        cout << "o seu novo salario e de " << b*1.5 << endl;
        break;
        case 'b':
        cout << "o seu novo salario e de " << b*1.1 << endl;
        break;

        case 'C':
        cout << "o seu novo salario e de " << b*2 << endl;
        break;
        case 'c':
        cout << "o seu novo salario e de " << b*1.1 << endl;
        break;
        default:
        cout << "insira um plano valido" << endl;
        break;

    }

}