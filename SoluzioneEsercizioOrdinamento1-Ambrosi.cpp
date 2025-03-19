# include <iostream>
# include <ctime> 
# include <cstdlib>
# include <string>
# define N 10000 //il num di prodotti
# define RANGE1 899999
# define RANGE2 1000
using namespace std;
int main()
{	srand(time(0));
	int codici[N], vendite[N];
	for (int i=0; i<N; i++)
	{
		codici[i]= 100000+(rand()%RANGE1);
		vendite[i]= rand()%RANGE2;
	}
	for (int i=0; i<N; i++)// ordino i vettori paralleli in ordine decresc. per num di vendite (quindi associo codice a posizione nuova num vendite)
	{
		for (int j=0; j<(N-1); j++)
		{	
			if (vendite[j]<vendite[j+1]) 
			{
				swap(vendite[j],vendite[j+1]);
				swap(codici[j],codici[j+1]);
			}
		}
	}
	cout<< "quantita' vendute in ordine decrescente "<< endl;
	for (int i=0; i<N; i++)
	{
		//cout<< vendite [i]<< " ";
	}
	cout<< endl<< endl;
	int a=0, codiciInvenduti[N];
	for (int i=N-1; i>=0; i--)
	{
		if(vendite[i]==0) 
		{
			codiciInvenduti[a]=codici[i];
            //cout << codiciInvenduti[a] << endl;
			a++;
		}
	}
	for (int i=0; i<a; i++)// ordino il vettore codiciInvenduti per ordine decrescente di codice
	{
		for (int j=0; j<(a-1); j++)
		{	
			if (codiciInvenduti[j]<codiciInvenduti[j+1]) 
			{
				swap(codiciInvenduti[j],codiciInvenduti[j+1]);
			}
		}
	}
	cout<< "codici dei prodotti invenduti in ordine decrescente "<< endl;
	for (int i=0; i<a; i++)
	{
		cout<< codiciInvenduti [i]<< " ";
	}
	cout<< endl<< endl;
 
	cout<< "codici dei 10 prodotti piu' venduti in ordine decrescente per vendite "<< endl;
	for (int i=0; i<10; i++)
	{
		cout<< codici [i]<< " - " << vendite[i] << endl;
	}
	cout<< endl<< endl;
	return 0;
}

