#include<iostream>

 using namespace std;
int main()
	{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b<d)
		{
			cout<<c-a<<":"<<d-b;
		}
	else
		{
			cout<<c-a-1<<" "<<60-b+d;
		}
	return 0;
	}
