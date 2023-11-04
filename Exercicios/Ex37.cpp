#include <iostream>

using namespace std;

int main(){

    int t=0;

    cout<< "insira uma temperatura: " << endl;
    cin >>t; 

    if(t<=15){
        cout << "Muito frio" << endl;
    }
    else if(t >=16 && t<23){
        cout << "Frio" << endl;
    }
     else if(t >=23 && t<26){
        cout << "Agradavel" << endl;
    }
     else if(t >=26 && t<30){
        cout << "Quente" << endl;
    }
     else if(t >=31){
        cout << "Muito Quente" << endl;
    }
}


