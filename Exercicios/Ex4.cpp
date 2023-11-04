#include <iostream>

using namespace std;

int main(){
    int dAtual, dNascimento;

    cout << "insira o ano atual: "<< endl;
    cin >>  dAtual;

    cout << "insira o ano que nasceu: " << endl;
    cin >> dNascimento;

    cout << "voce tem: " << dAtual-dNascimento << " anos." << endl;

    return 0;

}
