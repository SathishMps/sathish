#include <iostream>
using namespace std;

int main() {
	int n,i,fact=1;
	cin>>n;
	for(i=2;i<n+1;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	return 0;
}
