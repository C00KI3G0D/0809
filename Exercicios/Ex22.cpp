#include <iostream>

using namespace std;

int main(){

    int a;


    do{

    cout << "insira a Password" << endl;
    cin >> a;
    cout << "Password Errada" << endl;
    }while(a!=12345);
    cout << "Password Aceita" << endl;

    return 0;
}