#include <iostream>

using namespace std;

int main(){

    int a,idades=0, mIdade=0, sumIdades=0, storIdades=0;

    cout << "Insria a quantidade de idades que deseja: " << endl;
    cin >> a;
    
    for (int i = 1; i <= a; i++)
    {
        cout << "insira a idade n " << i << endl;
        cin >> idades;
        

        if(idades >=18){
            storIdades = idades;
            mIdade++;
            sumIdades= sumIdades + storIdades;

        }
    }

    cout << "O total de pessoas maiores de idade e de: " << mIdade << endl;
    cout << "A media das iadades dos maiores de idade e de: "<< sumIdades/ mIdade << endl;
}