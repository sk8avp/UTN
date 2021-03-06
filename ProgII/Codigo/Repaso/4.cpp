#include <iostream>
using namespace std;

#include <cstdlib>
#include <cstdio>
#include <cstring>

// Declaracion de funciones
void initMat(int[][10], int, int);
void showMat(int[][10], int, int);
int posNumbersbyColumn(int[][10],int);

int main( void )
{
  int selectedCol;
  cout << "Seleccione la columna: ";
  cin >> selectedCol;
  int mat[10][10];
  initMat(mat, 10, 10);
  showMat(mat, 10, 10);
  cout << "La cantidad de positivos en la columna " << selectedCol << " es " << posNumbersbyColumn(mat, selectedCol) << endl;
  return 0;
}

void initMat(int Mat[][10], int Rows, int Cols)
{
  for(int i = -5; i < Rows-5; i++)
  {
    for(int ni = -5; ni < Cols-5; ni++)
    {
      Mat[ni+5][i+5] = ni + i;
    }
  }
}

void showMat(int Mat[][10], int Rows, int Cols)
{
  for(int i = 0; i < Rows; i++)
  {
    cout << "Fila[" << i << "] ";
    for(int ni = 0; ni < Cols; ni++)
    {
      cout << Mat[i][ni] << '\t';
    }
    cout << endl;
  }
}

int posNumbersbyColumn(int Mat[][10], int Col)
{
  int cantPos = 0;
  for(int i = 0; i < 10; i++)
  {
    if(Mat[i][Col] > 0)
    {
      cantPos++;
    }
  }
  return cantPos;
}
