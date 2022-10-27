/* zadanie 3 zuzanna pisula
dane:
znak - pojedyncze znaki ktore wprowadzamy do konsoli, o ich liczbie decyduje uzytkownik, typ char, wprowadzane przez uzytkownika.
dlugosc - dlugosc ciagu znakow
zmienne pomocnicze:
n - operator pętli while która obsługuje wpisywanie znaków do konsoli.
y - operator pętli for wyszukujacej ciag znaków "abc"
wynik:
ciag - łańcuch zbudowany z ciagu znaków należących do zmiennej "znak", typ string.
abc - ilosc wystepowania ciagu "abc" w stringu "ciag"
*/
#include <iostream>
#include <string>
using namespace std;
char a, b , c;
//program zmieniajacy podane znaki w ciag i znajdujacy w nim sekwencje podana przez użytkownika
int main()
{
    int n = 1, i = 0;
    int abc = 0;
    char znak;
    string ciag;
    cout << "podaj ciag znakow, kazdy znak ma byc oddzielony enterem, podanie kropki konczy wprowadzanie : " << endl;
    do
    {
        cin >> znak;
        if (znak == '.')
        {
            n = 0;
        }
        else
        {
            ciag += znak;
        }
    } while (n != 0);
    cout << endl << "ciag to: " <<  ciag << endl;
    int dlugosc = ciag.length() - 1;
    cout << "podaj trzy znaki ktorych podana sekwencja bedzie wyszukiwana w ciagu: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    for(int y = 0;y<=dlugosc;y++)
    {
        if(ciag[y]==a and ciag[y +1] ==b and ciag[y+2]== c)
        {
            abc++;
        }
    }
    cout << " w ciagu wystepuje sekwencja  " << abc << " raz/razy";


    return 0;
}
