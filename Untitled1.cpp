#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	
	srand(time(0));
	int inculata=0;
	int salvezza=0;
	int N;
	cout<<"Quanti voti generare:";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int num =rand()%10+1;
		cout<<num<<endl;
		if(num<=5)
			{
				inculata++;
			}
		else
			{
				salvezza++;
			}
	}
	cout<<"N di salvataggi: "<<salvezza<<endl;
	cout<<"N di inculate: "<<inculata;
	return (0);
}
