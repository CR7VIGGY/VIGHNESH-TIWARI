//VIGHNESH TIWARI CODES , AIT PUNE , INDIA 
//bon appetit           //GITHUB PROFILE : CR7VIGGY
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c=0,d,i,j,k;
	cin>>a>>b;
	int x[a];
	for(i = 0 ; i < a ; i++)
	cin>>x[i];
	
	cin>>d;
	
	x[b] = NULL;
	
	for(i = 0 ; i < a ; i++)
	{
		c = c + x[i];
	}
	c = c/2;
	
	if(c == d)
	cout<<"Bon Appetit";
	else
	cout<<d-c;
	
}
