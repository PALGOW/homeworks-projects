#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int sayi;
	int temp=0;
	
	cout<<"Lutfen bir sayi giriniz. ";
	cin >> sayi;
	b = sayi;
	while (sayi>0)
	{
		a = sayi%10;
		sayi = sayi/10;
		temp = temp*10+a;
	}
	if (temp == b)
	{
		cout<<"Girdiginiz sayi bir palindrom sayidir.";
	}
	else
	{
		cout<<"Girdiginiz sayi bir palindrom sayi degildir.";
	}
	

return 0;
}
