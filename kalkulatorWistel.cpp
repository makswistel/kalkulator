// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 float a;
 float b;
 int wyb;
 float wyn;
 int wyn2;
 int a2;
 int b2;
    
    

    cout << "<------------->"<<endl;
    cout << "Napisz co chcesz zrobić: "<<endl;
    cout << "1. Dodawanie"<<endl;
    cout << "2. Odejmowanie"<<endl;
    cout << "3. Mnożenie"<<endl;
    cout << "4. Dzielenie"<<endl;
    cout << "5 . Dzielenie z resztą"<<endl;
    cout << "6 . Potęgowanie"<<endl;
    cout << "7 . Pierwiastkowanie"<<endl;
    
    cout << "<------------->"<<endl;
    cin >> wyb;
    
    
    if (wyb == 5){
    cout << "Podaj pierwszą liczbe: ";
    cin >> a2;
    cout << "Podaj drugą liczbe: ";
    cin >> b2;
    }else if (wyb == 6){
    cout << "Podaj podstawę potęgi: ";
    cin >> a;
    cout << "Podaj wykładnik: ";
    cin >> b;
    }else if (wyb == 7){
    cout << "Podaj liczbę do spierwiastokania ";
    cin >> a;
    }else{
    cout << "Podaj pierwszą liczbe: ";
    cin >> a;
    cout << "Podaj drugą liczbe: ";
    cin >> b;
    }if (wyb < 7){
    return 0;
    }
    
    switch(wyb){
    case 1:
    wyn = a + b;
    cout << "Twój wynik to: "<< wyn <<endl;
    break;
    
     case 2:
    wyn = a - b;
    cout << "Twój wynik to: "<< wyn <<endl;
    break;
    
     case 3:
    wyn = a * b;
    cout << "Twój wynik to: "<< wyn <<endl;
    break;
    
     case 4:
   
    if(b == 0){
    cout <<"Nie dziel przez zero";
    }else{
    wyn = a / b; 
    cout << "Twój wynik to: "<< wyn <<endl;
    }
    break;
    case 5:
   
    if(b == 0){
    cout <<"Nie dziel przez zero";
    }else{
    wyn2 = a2 % b2; 
    cout << "Reszta z dzielenia to: "<< wyn2 <<endl;
    }
    case 6:
    cout<<a<<" do potęgi "<<b<<" wynosi "<<pow(a, b)<<endl;
    break;
    
    case 7:
  cout<<"Pierwiastek z "<<a<<" = "<<sqrt(a)<<endl;
    
    break;
    case 8:
    cout << "Wybierz poprawne działanie";
    break;
    break;
    
    default:
    cout<< "złe polecenie";
    return 0;
    break;
    }
    
 
    return 0;
}
