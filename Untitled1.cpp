#include <iostream>
#include <string>
using namespace std;
int main()
{
	string frase=" ";
	cout<<"inserisci una frase: "<<endl;
	getline(cin,frase);
	int l = frase.size();
	cout<< l<<endl <<"Carattere iniziale: "<<frase[0]<<endl <<"Carattere finale: "<<frase[l-1] <<endl;
	for(int i=l;i>=0;i--)
	{
		cout<<frase[i-1];
	}
}

