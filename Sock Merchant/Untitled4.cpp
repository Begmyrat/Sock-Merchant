#include <iostream>

using namespace std;

int n,q,t;
int a[1000];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++){	
		cin>>q;	
		a[q]++;
	}
	for(int i=0;i<1000;i++)
		t+=a[i]/2;
	cout<<t<<endl;
	
	
	return 0;
}
