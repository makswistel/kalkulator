#include<iostream>
#include<cmath>
using namespace std;


float dodawanie(float a, float b) {
    return a + b;
}

float odejmowanie(float a, float b) {
    return a - b;
}

float mnozenie(float a, float b) {
    return a * b;
}

float dzielenie(float a, float b) {
    if(b == 0){
        cout <<"Nie dziel przez zero";
        return 0;
    }
    return a / b;
}

int dzielenie_z_reszta(int a, int b) {
    if(b == 0){
        cout <<"Nie dziel przez zero";
        return 0;
    }
    return a % b; 
}

float potegowanie(float a, float b) {
    return pow(a, b);
}

float pierwiastkowanie(float a) {
    return sqrt(a);
}

int main() {
    float a;
    float b;
    int wyb;
    
    cout << "<------------->"<<endl;
    cout << "Napisz co chcesz zrobić: "<<endl;
    cout << "1. Dodawanie"<<endl;
    cout << "2. Odejmowanie"<<endl;
    cout << "3. Mnożenie"<<endl;
    cout << "4. Dzielenie"<<endl;
    cout << "5. Dzielenie z resztą"<<endl;
    cout << "6. Potęgowanie"<<endl;
    cout << "7. Pierwiastkowanie"<<endl;
    cout << "<------------->"<<endl;
    cin >> wyb;

    switch(wyb){
        case 1:
            cout << "Podaj pierwszą liczbe: ";
            cin >> a;
            cout << "Podaj drugą liczbe: ";
            cin >> b;
            cout << "Twój wynik to: " << dodawanie(a, b) << endl;
            break;
        
        case 2:
            cout << "Podaj pierwszą liczbe: ";
            cin >> a;
            cout << "Podaj drugą liczbe: ";
            cin >> b;
            cout << "Twój wynik to: " << odejmowanie(a, b) << endl;
            break;
        
        case 3:
            cout << "Podaj pierwszą liczbe: ";
            cin >> a;
            cout << "Podaj drugą liczbe: ";
            cin >> b;
            cout << "Twój wynik to: " << mnozenie(a, b) << endl;
            break;
        
        case 4:
            cout << "Podaj pierwszą liczbe: ";
            cin >> a;
            cout << "Podaj drugą liczbe: ";
            cin >> b;
            cout << "Twój wynik to: " << dzielenie(a, b) << endl;
            break;
        
        case 5:
            int a2, b2;
            cout << "Podaj pierwszą liczbe: ";
            cin >> a2;
            cout << "Podaj drugą liczbe: ";
            cin >> b2;
            cout << "Reszta z dzielenia to: " << dzielenie_z_reszta(a2, b2) << endl;
            break;
        
        case 6:
            cout << "Podaj podstawę potęgi: ";
            cin >> a;
            cout << "Podaj wykładnik: ";
            cin >> b;
            cout << a << " do potęgi " << b << " wynosi " << potegowanie(a, b) << endl;
            break;
        
        case 7:
            cout << "Podaj liczbę do spierwiastokania: ";
            cin >> a;
            cout << "Pierwiastek z " << a << " = " << pierwiastkowanie(a) << endl;
            break;
        
        default:
            cout << "Wybierz poprawne działanie" << endl;
            break;
    }

    return 0;
}
