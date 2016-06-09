#include <iostream>
using namespace std;

int main() {
	int i,n,c=0,d=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
			c++;
		else if(a[i]>a[i+1])
			d++;
	}
	if(c==0 || d==0)
		cout<<"sorted";
	else
		cout<<"not sorted";
	return 0;
}
