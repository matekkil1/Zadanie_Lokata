#include "Display.h"
#include "Investment.cpp"
void Display::DisplayMenu()
{
    cout<<"LOKATA BANKOWA"<<endl<<"1.Nowa Lokata"<<endl<<"2.Testy automatyczne"<<endl;
}

void Display::DisplayInterestInfo(Investment *investment)
{
    cout<<*investment;
}

void Display::DisplayControlPanel()
{   cout<<endl<<"Wybierz jakiej operacji chcesz dokonać na lokacie"<<endl;
    cout<<"1.Dodaj środki"<<endl;
    cout<<"2.Usuń środki"<<endl;
    cout<<"3.Dodaj oprocenowanie"<<endl;
    cout<<"4.Usuń oprocentowanie"<<endl;
    cout<<"5.Przedluz okres trwania lokaty"<<endl;
    cout<<"6.Skróć okres trwania lokaty"<<endl;
    cout<<"7.Dodaj okres kapitalizacji"<<endl;
    cout<<"8.Usuń okres kapitalizacji"<<endl;
    cout<<"9.Koniec"<<endl;
}

void Display::DisplayComent()
{
    cout<<"Podany znak nie daje możliwości wyboru opcji działania na lokatach";
}
void Display::ClearConsole()
{
    system("clear");
}

void Display::DisplayComent1()
{
    cout<<"Dodaj środki [PLN]: ";
}

void Display::DisplayComent2()
{
    cout<<"Wyplac srodki [PLN]: ";
}

void Display::DisplayComent3()
{
    cout<<"Dodaj punkty procentowe do oprocentowania lokaty [%]: ";
}

void Display::DisplayComent4()
{
    cout<<"Odejmij punkty procentowe do oprocentowania lokaty [%]: ";
}

void Display::DisplayComent5()
{
    cout<<"Zwieksz termin lokaty [lata]: ";
}

void Display::DisplayComent6()
{
    cout<<"Zmniejsz termin lokaty [lata]: ";
}

void Display::DisplayComent7()
{
    cout<<"Zwieksz ilosc okresow kapitalizacji lokaty: ";
}

void Display::DisplayComent8()
{
    cout<<"Zmniejsz ilosc okresow kapitalizacji lokaty: ";
}

void Display::DisplayComent9()
{
    cout<<"Koniec";
}

void Display::DisplayComent10()
{
    cout<<"Za mało środków do wypłacenia";
}

void Display::DisplayComent11()
{
    cout<<"Za małe oprocentowanie aby móc je skrócić";
}

void Display::DisplayComent12()
{
    cout<<"Za krótki okres lokaty aby móc go skrócić";
}

void Display::DisplayComent13()
{
    cout<<"Zbyt mało okresów kapitalizacji";
}

void Display::DisplayComent14()
{
    cout<<"Nie można dodać tylu punktów procentowych";
}
