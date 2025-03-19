#include<iostream>
#include<ctime>   
#include<cstdlib>
using namespace std;
#define N 10   
#define MAX 10     

int main ()
{
	int vet[N];
	int vetRis[N]; // vettore senza duplicati
	int c = 0;	// indice vettore risultato
	srand(time(0));
	for(int i = 0; i<N;i++)
	{
		vet[i] = (rand() % MAX);   
	}
	int trovato;  // flag di controllo
	for (int i=0; i< N; i++ )
	{
			trovato = 0; 
			for (int j=0; j < c; j++ )
			{
				if ( vetRis[j] == vet[i] )
				trovato=1 ;
			}
			if ( trovato == 0 )
			{
				vetRis[c] = vet[i] ;
				c++;
			}
	}	
  cout<<"I valori iniziali:" << endl;
  for(int i=0;i<N;i++)
  {
      cout <<vet[i]<< "  ";
  }
  
  cout<< endl <<"I valori senza doppioni sono:" << endl;
  for(int i=0;i<c;i++)
  {
      cout <<vetRis[i]<< "  ";
  }
  return 0;
}