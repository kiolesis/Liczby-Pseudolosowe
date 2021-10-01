#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
	double tab4[10];
	srand(time(NULL));
	for(int i=0;i<=9;i++)tab4[i]=4+(double)(rand()%3001)/1000;
	for(int i=0;i<=9;i++)cout<<tab4[i]<<" ";
	double n=tab4[0];
	for(int i=0;i<=9;i++)
	{
		if(n>tab4[i])n=tab4[i];
	}
	cout<<endl<<n;
}
