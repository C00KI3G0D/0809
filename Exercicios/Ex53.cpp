#include <iostream>
using namespace std;

int main()
{
    const int total = 2;
    
    string nvendedor[total];
    int totvendas[total], val[total];
    double percom[total];
    int  countm = 0, countmen=0, sumven =0, maior=0, menor=9999999999;
    
    for (int i = 0; i < total; i++) {
    
        cout << "insira o nome do vendedor: " << i << endl;
        cin >> nvendedor[i];
        cout << "insira a percentagem da comissao do vendedor: " << i << endl;
        cin >> percom[i];
        cout << "insira o total de vendas do vendedor: " << i << endl;
        cin >> totvendas[i];
    
    }
    cout << "Eis os nomes dos vendedores e o quanto devem receber: " << endl;
    for (int i = 0; i < total; i++) {
       
        val[i] = totvendas[i] * (percom[i]  / 100);
        cout << nvendedor[i] << " deve receber " << val[i] << endl;
    }
    
    for (int i = 0; i < total; i++) {
        sumven = sumven + totvendas[i];
    }
    
    for (int i = 0; i < total; i++) {
        if (val[i] > maior) {
            maior = val[i];
            countm =i;
        }
        
        if (val[i] < menor) {
            menor = val[i];
            countmen= i;
        }
    }

    cout << "O total de vendas de todos os vendedores: " << sumven << endl;
    cout << "o maior valor e: " << maior << " do vendedor: " << nvendedor[countm] << endl;
    cout << "o menor valor e: " << menor << " do vendedor: " << nvendedor[countmen] << endl;
}
