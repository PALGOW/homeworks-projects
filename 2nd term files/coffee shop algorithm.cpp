#include <iostream>
using namespace std;

struct kahve {
    string kahveboyu;
    char sutlu;
    int sertlik;
};

struct musteri {
    int sutmiktari;
    int sumiktari;
    int kahvemiktari;
};
musteri z1;


int SutMiktari(kahve x1){
    if (x1.sutlu == 'h') {
        return z1.sutmiktari = 0;
    }
    else if (x1.sutlu == 'e')
    {
        if (x1.kahveboyu == "kucuk") {
            if (x1.sertlik==0)
            {
                return z1.sutmiktari = 100;
            }
            else if (x1.sertlik == 1)
            {
                return z1.sutmiktari = 90;
            }
            else if (x1.sertlik == 2)
            {
                return z1.sutmiktari = 80;
            }

        }
        if (x1.kahveboyu == "orta") {
            if (x1.sertlik == 0)
            {
                return z1.sutmiktari = 110;
            }
            else if (x1.sertlik == 1)
            {
                return z1.sutmiktari = 100;
            }
            else if (x1.sertlik == 2)
            {
                return z1.sutmiktari = 90;
            }

        }
        if (x1.kahveboyu == "buyuk") {
            if (x1.sertlik == 0)
            {
                return z1.sutmiktari = 120;
            }
            else if (x1.sertlik == 1)
            {
                return z1.sutmiktari = 110;
            }
            else if (x1.sertlik == 2)
            {
                return z1.sutmiktari = 100;
            }

        }

       
    }
    

};
int KahveMiktari(kahve x1){
    if (x1.kahveboyu == "kucuk") {
        if (x1.sertlik == 0)
        {
            return z1.kahvemiktari = 100;
        }
        else if (x1.sertlik == 1)
        {
            return z1.kahvemiktari = 150;
        }
        else if (x1.sertlik == 2)
        {
            return z1.kahvemiktari = 200;
        }

    }
    if (x1.kahveboyu == "orta") {
        if (x1.sertlik == 0)
        {
            return z1.kahvemiktari = 150;
        }
        else if (x1.sertlik == 1)
        {
            return z1.kahvemiktari = 200;
        }
        else if (x1.sertlik == 2)
        {
            return z1.kahvemiktari = 250;
        }

    }
    if (x1.kahveboyu == "buyuk") {
        if (x1.sertlik == 0)
        {
            return z1.kahvemiktari = 200;
        }
        else if (x1.sertlik == 1)
        {
            return z1.kahvemiktari = 250;
        }
        else if (x1.sertlik == 2)
        {
            return z1.kahvemiktari = 300;
        }

    }
};
void SuMiktari(kahve x1){
    int sukahvetoplam;
    sukahvetoplam = z1.kahvemiktari + z1.sutmiktari;
    if (x1.kahveboyu == "buyuk") {
        z1.sumiktari = 590 - sukahvetoplam;
    }
    if (x1.kahveboyu == "orta") {
        z1.sumiktari = 470 - sukahvetoplam;
    }
    if (x1.kahveboyu == "kucuk") {
        z1.sumiktari = 350 - sukahvetoplam;
    }
};


int main()
{
    kahve x1;
    int boytemp;
    int suttemp;
    int serttemp;

    cout << "Hangi boy kahve istersiniz? \nSeciniz\n1-Buyuk\t2-Orta\t3-Kucuk\n";
    cin >> boytemp;
    if (boytemp == 1)
    {
        x1.kahveboyu = "buyuk";
    }
    else if (boytemp == 2)
    {
        x1.kahveboyu = "orta";
    }
    else if (boytemp == 3)
    {
        x1.kahveboyu = "kucuk";
    }
    cout << "Sut ister misiniz? \nSeciniz\n1-Evet\t2-Hayir\n";
    cin >> suttemp;
    if (suttemp == 1)
    {
        x1.sutlu = 'e';
    }
    else if (suttemp == 2)
    {
        x1.sutlu = 'h';
    }
   
    cout << "Serligini nasil olsun? \nSeciniz\n1-Sert\t2-Orta\t3-Yumusak\n";
    cin >> serttemp;
    if (serttemp == 1)
    {
        x1.sertlik = 2;
    }
    else if (serttemp == 2)
    {
        x1.sertlik= 1;
    }
    else if (serttemp == 3)
    {
        x1.sertlik=0;
    }

    SutMiktari(x1);
    KahveMiktari(x1);
    SuMiktari(x1);
    cout << "\n\n Sut miktari:" << z1.sutmiktari << "\n kahve miktari:" << z1.kahvemiktari << "\n Su miktari:" << z1.sumiktari;

    
}
