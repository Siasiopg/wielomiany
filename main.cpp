#include <iostream>
#include "polynomial.cpp"

using namespace std;

int main()
{
    polynomial poly1, poly2;
    cout << "Wprowadz stopien wielomianu 1: ";
    cin >> poly1.level;
    cout << "Wprowadz stopien wielomianu 2: ";
    cin >> poly2.level;
    cout << endl;
    double values1[poly1.level];
    double values2[poly2.level];
    cout << "Wspolczynniki wpisuj od konca" << endl
         << endl;
    for (int i = 0; i < poly1.level; i++)
    {
        cout << "Podaj nastepny wspolczynnik wielomianu 1: ";
        cin >> values1[i];
    }
    for (int i = 0; i < poly2.level; i++)
    {
        cout << "Podaj nastepny wspolczynnik wielomianu 2: ";
        cin >> values2[i];
    }
    poly1.values = values1;
    poly2.values = values2;
    cout << "<-----Menu-----" << endl;
    cout << "1. Dodawanie wielomianow" << endl;
    cout << "2. Odejmowanie wielomianow" << endl;
    cout << "3. Mnozenie wielomianow" << endl;
    cout << "Wybierz operacje: ";
    int choice = 0;
    cin >> choice;
    polynomial poly3;
    switch (choice)
    {
    case 1:
        poly3 = add(poly1, poly2);
        break;
    case 2:
        poly3 = sub(poly1, poly2);
        break;
    case 3:
        poly3 = mult(poly1, poly2);
        break;
    default:
        cout << "Wybierz numer z listy";
        exit(0);
    }
    cout << "Stopien otrzymanego wielomianu to: " << get_level(poly3) << endl;
    cout << "Otrzymany wielomian: ";
    for (int i = 0; i < get_level(poly3); i++)
    {
        if (i == 0)
        {
            cout << get_value(poly3, i);
        }
        else
        {
            cout << " + " << get_value(poly3, i) << "x^" << i;
        }
    }
    return 0;
}
