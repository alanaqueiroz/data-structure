#include <iostream>
using namespace std;
#define QTDNC 2
typedef struct {
 float real, imaginaria;
} numcomplex;
void leNumComplex(numcomplex *nc) {
 cout << endl << "Parte Real: ";
 cin >> nc->real;
 cout << endl << "Parte Imaginaria: ";
 cin >> nc->imaginaria;
}
void escreveNumComplex(numcomplex nc) {
 cout << endl << "Numero Complexo: ";
 if ((nc.real != 0) || (nc.imaginaria == 0)) {
 cout << nc.real;
 }
 if (nc.imaginaria != 0) {
 if ((nc.imaginaria > 0) && (nc.real != 0)) {
 cout << "+" << nc.imaginaria;
 } else {
 cout << nc.imaginaria;
 }
 cout << "i";
 }
 cout << endl;
}
numcomplex somaNumComplex(numcomplex a, numcomplex b) {
}
numcomplex produtoNumComplex(numcomplex a, numcomplex b) {
}
int main()
{
 int i;
 numcomplex vetorNC[QTDNC];
 numcomplex sNC, pNC;
 for (i=0; i<QTDNC; i++) {
 cout << endl << "====================";
 cout << endl << i+1 << "o Numero Complexo";
 cout << endl << "====================" << endl;
 leNumComplex(&vetorNC[i]);
 escreveNumComplex(vetorNC[i]);
 }
 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Soma";
 cout << endl << "====================" << endl;
 sNC = somaNumComplex(vetorNC[0], vetorNC[1]);
 escreveNumComplex(sNC);
 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Produto";
 cout << endl << "====================" << endl;
 pNC = produtoNumComplex(vetorNC[0], vetorNC[1]);
 escreveNumComplex(pNC);
 cout << endl << "====================" << endl;
 return 0;
}