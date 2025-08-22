#include <iostream>
using namespace std;

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + somaRecursiva(n - 1);
    }
}

int main() {
    int N;
    
    cout << "Digite um número inteiro positivo maior que zero: ";
    cin >> N;
    
    int resultado = somaRecursiva(N);
    cout << "A soma dos números de 1 a " << N << " é: " << resultado << endl;
    
    return 0;
}