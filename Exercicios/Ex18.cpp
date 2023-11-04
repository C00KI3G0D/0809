#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "insira um numero de 1 a 10: " << endl;
    cin >> a;

    switch(a){
        case 1:
            cout << "Um" << endl;
        break;
        case 2:
            cout << "Dois" << endl;
        break;
        case 3:
            cout << "Tres" << endl;
        break;
        case 4:
            cout << "Quatro" << endl;
        break;
        case 5:
            cout << "Cinco" << endl;
        break;
        case 6:
            cout << "Seis" << endl;
        break;
        case 7:
            cout << "Sete" << endl;
        break;
        case 8:
            cout << "Oito" << endl;
        break;
        case 9:
            cout << "Nove" << endl;
        break;
        case 10:
            cout << "Dez" << endl;
        break;
        default:
        cout << "insira um numero Valido" <<endl; 
    }


}