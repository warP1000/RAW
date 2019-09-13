#include<iostream>

 using namespace std;
int main()
	{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e=60*a+b,f=60*c+d;
	int vb=f-e;
	cout<<vb/60<<" "<<vb%60;
	return 0;
	}
