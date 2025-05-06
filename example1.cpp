#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void matriz(int** p,int n) {

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			*(*(p + i) + j) = 1 + rand()% 9 ;
		}
	}
}
void imprimirMatriz(int** p,int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout<< *(*(p + i) + j) << " " ;
		}
		cout<<endl;
	}
}
void escogerNum(int**p,int n) {
	int a,b;
	int num;
	cout<< "digita fila y columna:";
	cin>> a ;
	cin>>b ;
	num = *(*(p + a) + b);
	cout<< *(*(p + a) + b);
	int i,j;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			*(*(p + i) + j) = 1 + rand()% 9 ;
		}

	}
	for(int i=0; i<n; i++) {
		*(*(p + i) + b) = num;

	}
}

void imprimirNewm(int** p,int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout<< *(*(p + i) + j) << " " ;
		}
		cout<<endl;
	}
}

int main() {
	srand(time(NULL));
	int x;
	cout<<"ingrese el orden de la matriz nxn:";
	cin>>x;

	int arreglo[50][50];
	int* pArreglo[50];
	for(int i=0; i<50; i++) {
		pArreglo[i] = arreglo[i];
	}
	matriz(pArreglo,x);
	imprimirMatriz(pArreglo,x);
	escogerNum(pArreglo,x);
	cout<<endl;
	imprimirNewm(pArreglo,x);

	return 0;
}