#include <iostream>
using namespace std;

int main()
{
	int yildiz_sirasi;  //  Ýstediðimiz sayýyý yazdýrmak için bir integer tanýmlýyoruz ve kullanýcýdan komut istiyoruz.
	cout <<"1'den 5'e kadar istediginiz yildiz sirasi kadar bir sayi giriniz."   <<endl;
	cin >> yildiz_sirasi;  // Girdiyi istiyoruz

	for (int i=yildiz_sirasi; i>=0; i--)  // i deðiþkenine kullanýcý girdisine atadýðýmýz için istenilen sonucu bize verecek.
	{
		for (int j=1; j<=i; j++)
 	{
			cout<<"*";
	}
		cout<<endl;
	}
	
	return 0;
	
}
	
	

