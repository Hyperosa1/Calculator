#include <iostream>
#include  <string>

using namespace std;

main()
{
    
    cout << "----------------------------" << endl;
    cout << "|      Kalkulator          |" << endl;
    cout << "|   By Daniel Staroń       |" << endl;
    cout << "| Zadanie do zaliczenia    |" << endl;
    cout << "----------------------------" << endl;

    double zm1, zm2;

    poczatek:
            
    cout <<"Podaj pierwsza liczbę" << endl;
    cin >> zm1;
    cout <<"Podaj drugą liczbę" << endl;
    cin >> zm2;

    cout << "Co chcesz zrobić z tymi liczbami?" << endl;
    cout << "+ - dodac" << endl;
    cout << "- - odjac" << endl;
    cout << "* - pomnozyc" << endl;
    cout << "/ - podzielic" << endl;

    char znak;

    cin >> znak;

    switch (znak)
    {
        case '+':
            cout << zm1 << " + " << zm2 << " = " << (zm1 + zm2) << endl;
            break;
       case '-':
            cout << zm1 << " - " << zm2 << " = " << (zm1 - zm2) << endl;
            break;
        case '*':
            cout << zm1 << " * " << zm2 << " = " << (zm1 * zm2) << endl;
            break;
        case '/':
            if (zm2 !=0 )
               cout << zm1 << " / " << zm2 << " = " << (zm1 / zm2) << endl;
            else
               cout <<" CHolero nie dziel przez zero" << endl;
            break;
    }       

    cout <<"Czy chcesz kontynowac program? (T/N)" << endl;
    cin >> znak;

    if (znak == 't' || znak == 'T') 
        goto poczatek;


    system ("pause");
}