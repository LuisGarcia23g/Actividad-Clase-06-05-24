#include <iostream>
using namespace std;
int main () {
    
char letra= ' ';


while (letra != 'X' && letra != 'x'){
    cout << "Escoja una letra para el almuerzo (elijala en mayuscula): \n"; 

    cout << "A. Hamburguezas\n";
    cout << "B. Pizza\n";
    cout << "C. Tortas\n";
    cout << "D. Tacos\n";
    cout << "E. Pollo frito\n";
    cout << "Almuerzo elegido: ";
    cin >> letra;

    
    
}
return 0;
} 
