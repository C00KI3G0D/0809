#include <iostream>

using namespace std;

int main(){

    int  num=0,qnum=0,i1=0,i2=0,i3=0,i4=0;

    cout << "insira a quantidade de numeros que qer inserir" << endl;
    cin >> qnum;

    for (int i=1 ; i <=qnum; i++){
        cout << "inira o " << i << ". numero." <<endl;
        cin >> num;

        if(num >=0 && num<=25){
            i1= i1+1;
            
        }
        else if(num >=26 && num<=50){
            i2= i2+1;
        }
        else if(num >=51 && num<=75){
            i3= i3+1;
        }
        else if(num >=76 && num<=100){
            i4= i4+1;
        }
    }
    cout << "DOS NUMEROS QUE INSERIU: " << endl;
    cout << i1 << " estao entre[0-25]" << endl;
    cout << i2 << " estao entre[26-50]" << endl;
    cout << i3 << " estao entre[51-75]" << endl;
    cout << i4 << " estao entre[76-100]" << endl;




}