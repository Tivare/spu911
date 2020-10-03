#include<iostream>
#include<ctime>
#include"sum.h"

using namespace std;

int main()
{
	cout<<"Hello git"<<endl;
	int a, b;
	cout<<"Enter two numbers->";
	cin>>a>>b;
	int res = Sum(a,b);
	cout<<"Res = "<<res<<endl;
}