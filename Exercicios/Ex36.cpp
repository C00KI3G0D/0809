#include <iostream>

using namespace std;

int main(){

    int qj=0, j=50, d=0, p=0;

    cout<< "insira a quantidade de jogos que deseja comprar: " << endl;
    cin >>qj; 

    if(qj<10){
        cout << "o preco sera: " << j*qj << " euros." << endl;
        cout << "nao houve descontos" << endl;

    }
    else if(qj>=10 && qj<=19){
        
        p=j*qj;
        d= p*0.2;
        cout << "o preco sera: " << p << endl;
        cout << "o desconto sera de: " << d << " euros." << endl;
        cout << "o preco com desconto sera: " << p-d << " euros." << endl;
    }
    else if(qj>=20 && qj<=49){
        
        p=j*qj;
        d= p*0.3;
        cout << "o preco sera: " << p << endl;
        cout << "o desconto sera de: " << d << " euros." << endl;
        cout << "o preco com desconto sera: " << p-d << " euros." << endl;
    }
    else if(qj>=50 && qj<=99){
        p=j*qj;
        d= p*0.4;
        cout << "o preco sera: " << p << endl;
        cout << "o desconto sera de: " << d << " euros." << endl;
        cout << "o preco com desconto sera: " << p-d << " euros." << endl;
    }else if(qj>=100){
        
        p=j*qj;
        d= p*0.5;
        cout << "o preco sera: " << p << endl;
        cout << "o desconto sera de: " << d << " euros." << endl;
        cout << "o preco com desconto sera: " << p-d << " euros." << endl;
    }else if(qj <0){
        cout << "insira um valor valido.";
    }



}