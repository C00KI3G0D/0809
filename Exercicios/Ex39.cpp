#include <iostream>

using namespace std;

int main(){

    int num=0, sum=0;

    cout << "insira o numero desejado: " << endl;
    cin >> num;

    for(int i = 0 ; i <=num; i++) {
        sum= sum + i;
        
    }
    cout << "O somatorio e de: " << sum << endl;


}