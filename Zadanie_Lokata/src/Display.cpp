#include "Display.h"
#include "Investment.cpp"
void Display::DisplayMenu()
{
    std::cout<<"LOKATA BANKOWA"<<std::endl<<"1.Nowa Lokata"<<std::endl<<"2.Testy automatyczne"<<std::endl;
}

void Display::DisplayInterestInfo(Investment *investment)
{
    std::cout<<*investment;
}

void Display::DisplayControlPanel()
{   std::cout<<std::endl<<"Wybierz jakiej operacji chcesz dokonać na lokacie"<<std::endl;
    std::cout<<"1.Dodaj środki"<<std::endl;
    std::cout<<"2.Usuń środki"<<std::endl;
    std::cout<<"3.Dodaj oprocenowanie"<<std::endl;
    std::cout<<"4.Usuń oprocentowanie"<<std::endl;
    std::cout<<"5.Przedluz okres trwania lokaty"<<std::endl;
    std::cout<<"6.Skróć okres trwania lokaty"<<std::endl;
    std::cout<<"7.Dodaj okres kapitalizacji"<<std::endl;
    std::cout<<"8.Usuń okres kapitalizacji"<<std::endl;
    std::cout<<"9.Koniec"<<std::endl;
}

void Display::DisplayComent()
{
    std::cout<<"Podany znak nie daje możliwości wyboru opcji działania na lokatach";
}
void Display::ClearConsole()
{
    system("clear");
}

void Display::DisplayComent1()
{
    std::cout<<"Dodaj środki [PLN]: ";
}

void Display::DisplayComent2()
{
    std::cout<<"Wyplac srodki [PLN]: ";
}

void Display::DisplayComent3()
{
    std::cout<<"Dodaj punkty procentowe do oprocentowania lokaty [%]: ";
}

void Display::DisplayComent4()
{
    std::cout<<"Odejmij punkty procentowe do oprocentowania lokaty [%]: ";
}

void Display::DisplayComent5()
{
    std::cout<<"Zwieksz termin lokaty [lata]: ";
}

void Display::DisplayComent6()
{
    std::cout<<"Zmniejsz termin lokaty [lata]: ";
}

void Display::DisplayComent7()
{
    std::cout<<"Zwieksz ilosc okresow kapitalizacji lokaty: ";
}

void Display::DisplayComent8()
{
    std::cout<<"Zmniejsz ilosc okresow kapitalizacji lokaty: ";
}

void Display::DisplayComent9()
{
    std::cout<<"Koniec";
}

void Display::DisplayComent10()
{
    std::cout<<"Za mało środków do wypłacenia";
}

void Display::DisplayComent11()
{
    std::cout<<"Za małe oprocentowanie aby móc je skrócić";
}

void Display::DisplayComent12()
{
    std::cout<<"Za krótki okres lokaty aby móc go skrócić";
}

void Display::DisplayComent13()
{
    std::cout<<"Zbyt mało okresów kapitalizacji";
}

void Display::DisplayComent14()
{
    std::cout<<"Nie można dodać tylu punktów procentowych";
}
