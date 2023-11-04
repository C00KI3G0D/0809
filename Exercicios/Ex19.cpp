#include <iostream>

using namespace std;

int main(){

    int cod;
    double quan;


    cout << "insira o codigo do item que quer: " << endl;
    cin >> cod;

    cout << "insira a quantidade: " << endl;
    cin >> quan; 

    switch(cod){
        case 100: 
            cout << "deve pagar " << quan *1.20 << " euros por " << quan << " Cachorro(s) quente(s)." << endl;
        break;
        case 101: 
            cout << "deve pagar " << quan *1.30 << " euros por " << quan << " Bauru(s) simples." << endl;
        break;
        case 102: 
            cout << "deve pagar " << quan *1.50 << " euros por " << quan <<  " Bauru(s) com ovo." << endl;
        break;
        case 103: 
            cout << "deve pagar " << quan *1.20 << " euros por " << quan << " Hamburger(s)." << endl;
        break;
        case 104: 
            cout << "deve pagar " << quan *1.30 << " euros por " << quan <<  " Cheeseburger(s)." << endl;
        break;
        case 105: 
            cout << "deve pagar " << quan *1 << " euros por " << quan << " Refrigerante(s)." << endl;
        break;
        default:
            cout << "insira um codigo valido." << endl;
            break;
    }

}
