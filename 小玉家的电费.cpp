#include<iostream>
using namespace std;
int main()
{
	int begin,over;
		cin>>begin;
	if(begin<=400)
		cout<<begin*0.4463;
	if(begin>400)
		cout<<400*0.4463+(begin-400)*0.5663;

		
	return 0;
}
