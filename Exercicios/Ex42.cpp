#include <iostream>

using namespace std;

int main(){

    int v;
    cout << "insira um valor" << endl;
    cin >> v;

    if(v >10){
        cout << "O numero e maior que 10!" << endl;

    }else if (v <10){
        cout << "O numero e menor que 10!" << endl;
    }else{
        cout << "O valor e 10!" << endl;
    }

}