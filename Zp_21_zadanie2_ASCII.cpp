//Zuzanna Pisula 2B
#include <iostream>
#include <string>
using namespace std;
//zadanie 1
//tabela ASCII użwana jest do kodowania znaków w systemie siedmiobitowym, powszechnie używana w wspolczesnych komputerach. Zawiera liczby z zakresu 0-127 ktorym przyporzadkowuje
//litery i znaki.
/*
zadanie 2
dane:
znak - znak wprowadzany przez uzytkownika do pokazania jego kodu ASCII,podpunkt a
liczba - liczba z zakresu od 33 do 126, liczba calkowita, wprowadzana przez uzytkownika, podpunkt b
mala - mala litera do zamienienia na dużą, wprowadzana przez uzytkownika. podpunkt c
wynik:
ASCII - kod znaku w systemie ASCII, podpunkt a
zamiana - znak danej liczby w systemie ASCII, podpunkt b
duza - wielka litera , podpunkt c
*/
int main ()
{
    //podpunkt a
    cout << "podaj znak: ";
    char znak;
    cin >> znak;
    int ASCII = znak;
    cout << "kod ASCII znaku to: " << ASCII << endl;
    //podpunkt b
    cout << "podaj liczbe z zakresu od 33 do 126:";
    int liczba;
    cin >> liczba;
    char zamiana;
    zamiana = liczba;
    if (liczba < 33 or liczba > 126)
    {
        cout << "niepoprawna liczba";
    }
    else
    {
        cout << "jest to znak: " << zamiana;
    }
    //podpunkt c
    cout << "podaj litere do zamienienia na dużą: ";
    char mala;
    char duza = mala + 22;
    if(97 > mala or 122 < mala)
    {
        cout << "blad" << endl;
    }
    else
    {
        cout << duza << endl;
    }
    return 0;
}
