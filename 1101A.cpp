#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	cin>>n;
	ll a,b,c;
	while(n>0)
	{
		cin>>a>>b>>c;
		int cond = 1;
		ll i=1;

		if(a==1 && c==1)
		{
			v.push_back(b+1);
			goto loop;
		}
		while(cond!=0)
		{
			k = c*i;
			i++;
			if(k < a or k > b)
			{
				v.push_back(k);
				cond=0;
			}
		}
		loop:
		n--;
	}

	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}