#include <iostream>
using namespace std;
int main()
{
int N=0;
do
		{
		cout<<"inserisci N:" <<endl;
		cin>>N;
		}while(N<0);
		
		for(int i=1;i<=N;i++)
		
			{

			if(i%3==1)
				{cout<<"A";}
			if(i%3==2)
				{cout<<"B";}
			if(i%3==0)
				{cout<<"C";}
				
			}	
return 0;



}

