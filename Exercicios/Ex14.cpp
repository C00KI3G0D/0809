#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "insira um numero: " << endl;
    cin >> a;

    if(a>0){
        cout << "o seu numero e positivo" << endl;
    }else if(a==0){
        cout << "o seu numero E 0" <<endl;
    }else if(a<0){
        cout << "o seu numero e negativo" << endl;

    }

    return 0;
}