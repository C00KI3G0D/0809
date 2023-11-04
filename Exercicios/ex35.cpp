#include <iostream>

using namespace std;

int main(){

    int numLivros=0, pontos=0;

    cout << "insira o numero de livros que comporu: " << endl;
    cin >> numLivros;

    if(numLivros==0){
        pontos+0;
    }
    else if(numLivros==1){
        pontos= pontos +5;
    }
    else if(numLivros==2){
        pontos= pontos +15;
    }
    else if(numLivros==3){
        pontos= pontos +30;
    }
    else if(numLivros>=4){
        pontos= pontos +60;
    }

    cout << "O utilazador comprou" << numLivros << " e tem de momento:  " << pontos << " pontos" << endl;

    return 0;

}