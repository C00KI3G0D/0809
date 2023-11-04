#include <iostream>

using namespace std;

int main(){

    int num =0, max= 0, min= 100, opc, sum=0, media;

    

    do{

        sum= sum+num;
        cout << sum << endl;

        cout << "insira um numero abaixo de 100: " << endl;
        cin >> num;
        
        cout << "1 para continuar, 0 para sair" <<endl;
        cin >>  opc;

        
        

        if (num < 100 && num >0) {
            if(num >=max){
                max = num;
            }else if(num < min) {
                min = num;

            }

        }else{
            cout << "insira um numero valido." << endl;
        }
    }while(opc!=0);
    

    cout << "o maior numero e: " << max <<endl;
    cout << "o menor numero e: " << min <<endl;
    cout << "a media numero e: " << sum/2 <<endl;



}