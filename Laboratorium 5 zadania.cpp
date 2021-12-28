#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdexcept>
#include <cstdlib>

using std::out_of_range;
using std::get;
using std::swap;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::array;
using std::vector;
using std::swap;


void Zadanie1()
{
    cout << "[Zadanie 1]" << endl << endl;
    /*
    * Napisz program, w którym:
    a) użytkownik poda liczbę elementów wektora;
    b) pobrane zostaną od użytkownika wszystkie elementy wektora;
    c) wskazana zostanie wartość elementu maksymalnego wektora;
    d) Wskazany zostanie numer indeksu elementu maksymalnego.
    */
    int x;
    cout << "Podaj liczbe elementow wektora" << endl;
    cin >> x;
    vector<int> wektor(x, 0);
    for (int i = 0; i < x; i++)
    {
        cout << "Podaj wartosc dla wektora [" << i << "]: ";
        cin >> wektor[i];
    }
    int najwiekszyElement = 0, indexNajwiekszegoElementu = 0, i = 0;
    for (auto const& element : wektor)
    {
        if (element > najwiekszyElement)
        {
            najwiekszyElement = element; // Przypisujemy najwiekszą wartość do zmiennej
            indexNajwiekszegoElementu = i; //Przypisujemy dany index do zmiennej 
        }
        i++;
    }
    cout << "Wartosc elementu maksymalnego wektora to: " << najwiekszyElement << endl;
    cout << "Jego index to: " << indexNajwiekszegoElementu << endl;
}
void Zadanie2()
{
    /*
    Napisz program, który umożliwia:
    a) wczytanie aktualnego rozmiaru tablicy liczb całkowitych;
    b) wczytanie elementów tablicy liczb całkowitych;
    c) zamianę miejscami elementów tablicy, lezących po przeciwnej stronie prostej pionowej,
    dzielącej tablicę na dwie równe części.
    */
    int wartosci, elementy;
    cout << "Podaj wielkosc tablicy ";
    cin >> elementy;
    cout << endl;
    int* tab;
    tab = new int[elementy];
    //Pobieranie wartość
    for (int i = 0; i < elementy; i++)
    {
        cout << "Podaj wielkosc elementu nr [" << i + 1 << "]\n";
        cin >> wartosci;
        tab[i] = wartosci;
    }

    cout << endl << "Tablica wejsciowa" << endl << endl << endl;

    for (int i = 0; i < elementy - 1; i += 2)
    {
        cout << tab[i] << "\t" << tab[i + 1] << endl;
    }
    if (elementy % 2 != 0)
    {
        cout << tab[elementy - 1] << endl;
    }

    cout << endl << "Tablica wyjsciowa" << endl << endl << endl;

    for (int i = 0; i < elementy - 1; i += 2)
    {
        cout << tab[i + 1] << "\t" << tab[i] << endl;
    }
    if (elementy % 2 != 0)
    {
        cout << "\t" << tab[elementy - 1] << endl;
    }
}

int main()
{
    Zadanie1();
    Zadanie2();
}
