#include <iostream>
#include <cmath>
using namespace std;

bool esprimo(int num){
    if(num < 2) 
    return false;
    for(int i=2; i<= sqrt(num);i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"ingrese el valo de n:";cin>>n;
    int gemelos[100][2];
    int contadorgemelos=0;

    int num1=2; int num2;
    int *pnum1 = &num1;
    int *pnum2 = &num2;

    while (contadorgemelos<n){
        if(esprimo(*pnum1)){
            *pnum2 = *pnum1 + 2;
            if(esprimo(*pnum2)){
                gemelos[contadorgemelos][0] = *pnum1;
                gemelos[contadorgemelos][1] = *pnum2;
                contadorgemelos++;
            }
        }
        (*pnum1)++;
    }

cout<< "numeros primos gemelos encontrados:"<<endl;
for(int i=0;i<contadorgemelos;i++){
        cout<<gemelos[i][0]<<" "<<gemelos[i][1]<<endl;
    }
    return 0;
}