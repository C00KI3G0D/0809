#include <iostream> 

using namespace std;  

int main(){
    int vol, alt, com, lar;

    cout << "insira o comprimento: " << endl;
    cin >> com;

    cout << "insira a altura: " << endl;
    cin >> alt;

    cout << "insira a largura: " << endl;

    cin >> lar;

    vol= com*alt*lar;

    cout << "o Volume da caixa e de: " << vol << endl;


    return 0;

}