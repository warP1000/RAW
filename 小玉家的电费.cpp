#include<iostream>
using namespace std;
int main()
{
	int begin;
		cin>>begin;
	if(begin<=150)
		cout<<begin*0.4463;
	if( begin>150,begin<=400)
		cout<<150*0.4463+(begin-150)*0.4663;
	if(begin>400)
		cout<<150*0.4463+(400-150)*0.4663+(begin-400)*0.5663;

		
	return 0;
}
