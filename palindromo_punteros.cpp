#include <iostream>
using namespace std;

bool palindromo(char *p){
  char *q=p;
  while(*q!='\0')
    {q++;}
  q--;
  char *aux=p;
  for(;aux<p+1;aux++,q--){
    if(*aux != *q)
      return 0;
  }
  return 1;
}


int main() {

  char A[5][100]={"amo la paloma","roma se asoma","ali toma tila","anita lava la tina","ramona come mora"};

  for(int i=0;i<5;i++){
    if(palindromo(A[i])==1)
      cout<<"La frase "<<i+1<<" si es un palindromo"<<endl;
    else 
      cout<<"La frase "<<i+1<<" no es un palindromo"<<endl;
  }
}
