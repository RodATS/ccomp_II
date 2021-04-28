#include <iostream>
using namespace std;

void intercambio(int *p, int *q)
  {
    int T=*p;
    *p=*q;
    *q= T;
  }

void transpuesta(int A[3][3])
{
  int aux;
  int contador=0;
  while(contador<3){
    int (*p)[3]=A+contador;
    int (*n)[3]=A+contador;
    for(int *q=*p+contador;q<*(p+1);q++)
    {
      int *r=*n+contador;
      intercambio(r, q);
      n++;
    }
    contador++;
  }
}


void imprimir(int A[][3])
{
  for(int (*p)[3]=A;p<A+3;p++)
  {
    for(int *q=*p;q<*(p+1);q++)
      cout<<*q<<" ";
    cout<<"\n";
  }
}

int main() {;
  int matriz[][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  imprimir(matriz);
  cout<<"\ntranspuesta:"<<endl;
  transpuesta(matriz);
  imprimir(matriz);

}
