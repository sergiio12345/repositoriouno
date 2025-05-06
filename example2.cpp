#include <iostream>
#include <cstring>
using namespace std;

int miStrcmp(const char* a, const char* b) {
    while(*a != '\0' && *b != '\0'){
		if(*a != *b){
			return *a - *b; // <0 or > 0
		}
		++a;
		++b;
	}
	return *a - *b; // < 0 or ==0 or > 0
}
//funcion para intercambiar dos cadenas
void swap(char* a, char* b) {
    char tmp[50];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

int main() {
    char texto[1000], palabras[200][50];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 1000);

    int n = 0; // Contador de palabras
    char* token = strtok(texto, " "); // Obtener la primera palabra

    while (token != nullptr && n < 200) {
    // Copiar el token a la lista de palabras, asegurando no exceder 49 caracteres
    strncpy(palabras[n], token, 49);

    // Asegurar que la palabra esté correctamente terminada con '\0'
    palabras[n][49] = '\0';

    // Avanzar al siguiente token
    n++;
    token = strtok(nullptr, " ");
}
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (miStrcmp(palabras[j], palabras[j + 1]) > 0)
                swap(palabras[j], palabras[j + 1]);

    cout << "\nPalabras ordenadas alfabéticamente:\n";
    for (int i = 0; i < n; ++i)
        cout << palabras[i] << endl;

    return 0;
}
