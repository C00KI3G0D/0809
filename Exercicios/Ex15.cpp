#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "insira a idade: " << endl;
    cin >> a;

    if(a>=5 && a<=7){
        cout << "Infatil A" << endl;
    }
    else if (a>=8 && a<=10){
        cout << "Infatil B" <<endl;
    }
    else if (a>=11 && a<=13){
        cout << "Juvenil A" <<endl;
    }
    else if (a>=14 && a<=17){
        cout << "Juvenil B" <<endl;
    }
    else if (a>=18){
        cout << "adulto" <<endl;
    }else{
        cout << "insira uma idade valida" << endl;
    }
}
