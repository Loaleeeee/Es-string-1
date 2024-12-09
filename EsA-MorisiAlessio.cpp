#include <iostream>
using namespace std;
int main(){
	int N;
	int calcolo=0;
	int i=1;
		do
		{
		cout<<"inserisci N:" <<endl;
		cin>>N;
		}while(N<=4 && N>=10);	
	
			while(i<N){
				if (i%2==0)
					{calcolo=(calcolo +i );}
				else
					{calcolo=(calcolo+(1/i));}
				i+2;
				}
			cout<<"Il risultato é:_";
			cout<<calcolo;

return 0;

}
