#include <iostream>
using namespace std;
//algorytm euklidesa metodą rekurencyjną
int euklides(float o,float k)
{
    if (o==k) 
    {
        return o;
    }
    else if (o > k)
    {
        o -= k;
    }
    else if (k > o)
    {
        k -= o;
    }
    euklides(o,k);
}
int main()
{
    cout << "podaj liczbe a: ";
    float a,b;
    cin >> a;
    cout << "podaj liczbe b: ";
    cin >> b;
    cout << "najwiekszy wspolny dzielnik to: " << euklides(a,b); 
}



