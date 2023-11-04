#include <iostream> 

using namespace std;  

int main(){

    int a, b,c, d;

    cout << "insira um valor" << endl;
    cin >> a;

    cout << "insira o valor 2" << endl;
    cin >> b;


    cout << "A: " << a << endl;
    cout << "B: " << b << endl;


    c=a;
    d=b;

    a=b;

    b=c;


    
    cout << "O valor que era o B e agora e A: "<< a << endl;
    cout << "O valor que era o A e agora e B: "<< b << endl;
    



}