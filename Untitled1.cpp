#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int inculata=0;
	for(int i=0;i<6;i++)
	{
		int num =rand()%6+1;
		cout<<num<<endl;
		if(num==1)
			{
				inculata++;
			}
	}
	cout<<"Sei stato inculato "<<inculata<<" volte";
	
}

