#include<iostream>

using namespace std;

int main()
{
	struct karma{
		int gercek;
		int sanal;
	};
	
	karma x;
	
	x.gercek = 10;
	x.sanal = 5;
	
	cout<<x.gercek<<"+"<<x.sanal<<"i"<<endl;
	
	
	return 0;
}
