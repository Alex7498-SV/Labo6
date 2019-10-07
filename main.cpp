#include <iostream>

using namespace std;

int lineas[2][3]{
    {8,5,10},
    {4,2,3}
};

int diagonales[2][2]{
    {2,6},
    {1,1}
};

int tInicial[2]{7,2};

int tFinal[2]{5,2};

void fastestWay(int lineas[2][3], int diagonal[2][2], int iniciales[2], int finales[2], int longitud){
    int fWay[longitud];
    int sWay[longitud];
    fWay[0] = iniciales[0] + lineas[0][0];
    sWay[0] = iniciales[1] + lineas[1][0];
    cout<<fWay[0];
    cout<<sWay[0];
}

int main()
{
   fastestWay(lineas, diagonales, tInicial, tFinal, 3);
}
