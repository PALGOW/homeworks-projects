#include <iostream>
using namespace std;

int main()
{
	int yildiz_sirasi;  //  �stedi�imiz say�y� yazd�rmak i�in bir integer tan�ml�yoruz ve kullan�c�dan komut istiyoruz.
	cout <<"1'den 5'e kadar istediginiz yildiz sirasi kadar bir sayi giriniz."   <<endl;
	cin >> yildiz_sirasi;  // Girdiyi istiyoruz

	for (int i=yildiz_sirasi; i>=0; i--)  // i de�i�kenine kullan�c� girdisine atad���m�z i�in istenilen sonucu bize verecek.
	{
		for (int j=1; j<=i; j++)
 	{
			cout<<"*";
	}
		cout<<endl;
	}
	
	return 0;
	
}
	
	

