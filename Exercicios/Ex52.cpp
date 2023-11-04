#include <iostream>
using namespace std;

int main()
{
    string prod[5], prodesp[5];
    
    int prec[5], countinf=0, mediacinq=0,sumcem=0, count=0, countcem=0;  
    
    for (int i = 0; i <5; i++)
    {
        count++;
        cout << "insira o produto n " <<i <<  endl;
        cin >> prod[i];
        cout << "insira o preco do prod " << i << endl;
        cin >> prec[i];
        
       
        if (prec[i] <50)
        {    
             countinf++;
        } else if(prec[i] >50 && prec[i] <100){

         prodesp[i] = prod[i];
        }else if(prec[i]>=100){
         sumcem= sumcem + prec[i];
         countcem++;
        }
        
    }
    
    
    
       
       
       cout << "A quantidade de produtos com preco inferior a 50 euros: " << countinf << endl;
       cout << "O nome dos produtos com preco entre os 50 e 100 euros: " << endl;
       for (int i = 0; i < 4; i++)
       {
        cout << prodesp[i] << endl;
       }
       cout << "A media dos precos dos prod acima dos 100: " << sumcem/countcem << endl;
}      
    
    


