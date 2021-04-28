#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <vector>
using namespace std;

void cocktail_sort(int lista[], int longitud)
{
  int* p=lista;
  int* q=lista+(longitud-1);
  int* t;
  while(p<q)
  {
    
    t=p;
    while(t<q)
    { 
      if(*t > *(t+1))
      {
      int aux;
      aux = *t;
      *t=*(t+1);
      *(t+1)=aux;
      }
      t++;
    }
    t=q;
    while(t>p)
    { 
      if(*t < *(t-1))
      {
      int aux;
      aux = *t;
      *t=*(t-1);
      *(t-1)=aux;
      }
      t--;
    }
    p++;
    q--;
  }
}

void imprimir(int lista[], int longitud)
{
  int *p= lista;
  for(;p<lista+longitud;p++)
    cout<<*p<<" ";
  cout<<endl;
}

int main(){
  int cantidad,numerito;
  cout<<"ingresa cantidad de numeros: ";
  cin>>cantidad;
  int indice=0;
  int lista[cantidad];
  srand(time(NULL));
  while(indice<cantidad)
  {
    numerito=rand()%101;
    lista[indice]=numerito;
    indice++;
  }
  imprimir(lista, sizeof(lista)/sizeof(lista[0]));
  
  cocktail_sort(lista, sizeof(lista)/sizeof(lista[0])) ;
  imprimir(lista, sizeof(lista)/sizeof(lista[0]));
  
}
