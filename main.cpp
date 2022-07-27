#include<iostream>
#include<ctime>
#include"dif.h"
#include"sum.h"
#include"prod.h"
#include"quot.h"

using namespace std;

int main()
{
	cout<<"Hello git"<<endl;
	int a, b;
	cout<<"Enter two numbers->";
	cin>>a>>b;
	int res = Sum(a,b);
	cout<<"Res = "<<res<<endl;
	res = Dif(a,b);
	cout<<"Res = "<<res<<endl;
	res = Prod(a,b);
	cout<<"Res = "<<res<<endl;
	res = Quot(a,b);
	cout<<"Res = "<<res<<endl;

}
