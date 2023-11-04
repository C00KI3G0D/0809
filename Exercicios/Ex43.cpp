#include <iostream>

using namespace std;

int main(){

    int num=0;
    int sum=0;

    for (int i=1 ; i <= 10 ; i++){
        cout << "insira um numero-na-posicao: " << i << endl;
        cin >> num;

        if(num <40){
            sum= sum+num;
        }

    }
        cout << "a soma dos numeros menores que 40 e de: " << sum << endl;


}