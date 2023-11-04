#include <iostream>

using namespace std;

int main(){

    int x, z;

    cout << "insira a nota 1: " << endl;
    cin >> z;

    cout << "insira a nota 2: " << endl;
    cin >> x;

    int media = (z+x)/2;

    if (media>=10){
        cout << "parabens, a sua nota foi de: " << media << endl;
    }else{
        cout << "a sua nota nao foi o suficiente para passar: " << media << endl;
    }

}