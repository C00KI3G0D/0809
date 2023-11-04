#include <iostream> 

using namespace std;  

int main(){
    int altur[14];
 int max = 0, min = 0;
 
    for(int i= 0 ; i <= 14; i++){
        cout << "insira a " << i << " altura." << endl;
        cin >> altur[i];
       
        if(altur[i] > max){
           max = altur[i];
           
        }else if(altur[i] < 1000){
           min = altur[i];
        }
       
    }
    cout << max << " e a altura maxima." << endl;
    cout << min << " e a altura minima." << endl;

}