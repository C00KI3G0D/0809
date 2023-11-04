#include <iostream>

using namespace std;

int main(){
    int num=0, pares[5], impares[5], npares=0, nimpares=0;

    for (int i = 0; i <= 5; i++)
    {
        cout << "insira um numero: " << endl;
        cin >> num;

        if (num%2 ==0)
        {
            npares++;
            pares[npares] = num;
        }else if (num%2 ==1)
        {
            nimpares++;
            impares[nimpares] = num;
        }    
    }

    cout << "A quantidade de npares: " << npares << endl;
    cout << "A quantidade de nimpares: " << nimpares << endl;
    cout << "Estes sao pares: " << endl;
    for (int i = 1; i <= npares; i++)
    {
            cout << pares[i] << endl;       
    }
    cout << "Estes sao impares: " << endl;
    for (int i = 1; i <= nimpares; i++)
    {  
            cout << impares[i] << endl; 
    }      
}

