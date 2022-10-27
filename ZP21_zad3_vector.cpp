#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;
/*
Zuzanna Pisula 2B zad 3 lista Antka
dane:
wektor - vector o wartosciach rzeczywistych
n - jedna z dwoch liczb losowanych, w zakresie od 1 do 100, e R
wynik:
srednia; srednia dwoch pierwszych elementow wektora , jest ostatnim elementem ciagu, e R
wyswietlenie dwoch wylosowanych liczb
*/ 
int main()
{
    srand( time( NULL ) );
    vector<float>wektor ;
    float n = 0;
    float m = 0;
    n= rand()%100 + 1;
    wektor.push_back(n);
    cout<< "pierwszy element" << wektor[0] << endl;
    m= rand() % 100 + 1;
    wektor.push_back(m);
    cout<< "drugi element" << wektor[1] << endl;    
    float srednia = (n+m)/2;
    wektor.push_back(srednia);
    cout<<"ostatni element ciagu: " << wektor.back();
    return 0;
}