#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}
