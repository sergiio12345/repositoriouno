#include <iostream>
#include <cstring>
#include <cmath>;
using namespace std;
int main(){
	char cad[] ="123, 45.67, -89, 1001";
	
	char* ptr = strtok(cad,", ");
	int suma=0;
	while(ptr!= nullptr){
		cout<<ptr<<endl;
		if(atof(ptr)==(atof(ptr))){
			suma += atof(ptr);
		}
		ptr = strtok(nullptr,", ");
	}
	
	cout<<"la suma:" <<suma;
	
	
	return 0;
}
