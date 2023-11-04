#include <iostream>
using namespace std;

int main()
{

    const int total=10;

    int num1[9], num2[9], res[9];

    for (int i = 0; i < total; i++)
    {
        cout<< "insira o primeiro num da posicao " << i << endl;
        cin >> num1[i];
        cout<< "insira o segundo num da posicao " << i << endl;
        cin >> num2[i];

        res[i] = num1[i] * num2[i];
    }
    for (int i = 0; i < total; i++)
    {
       cout << "Da posicao " << i << ": "<< num1[i] << " x " << num2[i] << " da: " << res[i] << endl;

    }
    
    


}