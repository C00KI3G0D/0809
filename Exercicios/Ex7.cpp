#include <iostream>

using namespace std;

int main(){

    int x,y;
    cout << "insira o valor total da compra: " << endl;
    cin >> x;

    cout << "insira o valor que pagou: " << endl;
    cin >>y;

    cout << "troco: " << y-x << endl;

    return 0; 

}