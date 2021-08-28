#include <iostream>

using namespace std;

int main(){
	int bosluk=5;
	for(int i=1; i<=5; i++){
		for(int k=5; k>i; k--){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<" *";
			bosluk--;
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}
