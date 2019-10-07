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

void fastestWay(int a[2][3], int t[2][2], int e[2], int x[2], int longitud){
    int f1[longitud];
    int f2[longitud];
    int fin;
    f1[0] = e[0] + a[0][0];
    f2[0] = e[1] + a[1][0];

    for(int j = 1; j<= longitud; j++){
        if(f1[j-1]+a[1][j] <= f2[j-1]+t[2][j-1]+ a[1][j]){
            f1[j] = f1[j-1] + a[1][j];
        }
        else{
            f1[j] = f2[j-1]+t[2][j-1]+ a[1][j];
        }
        if (f2[j-1] + a[2][j] <= f1[j-1] + t[1][j-1] + a[2][j]){
            f2[j] = f2[j-1] + a[2][j];
        }
        else{
            f2[j] = f1[j-1] + t[1][j-1] + a[2][j];
        }
    }

    if(f1[longitud] + x[0] <= f2[longitud] + x[1]){
        fin = f1[longitud] + x[0];
    }
    else{
        fin = f2[longitud] + x[1];
    }

    cout<<fin;
}

int main()
{
   fastestWay(lineas, diagonales, tInicial, tFinal, 3);

}
