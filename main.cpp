/* 
Laboratorio 1: Box Office
Nombre: Gianna Garcia Fox
Núm. Est: 801-22-7123
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
    //intro
    cout << "This program calculates the Gross and Net Box Office Profit and the \nDistributer's Profit of a movie playing in the theatre.\n";

    //declarar los primeros set de variables
    string movie;
    double adult_tickets;
    double child_tickets;

    //pedir los datos de esas variables
    cout << "Please enter the name of the movie: ";
    getline(cin, movie);
    cout << "Please enter the amount of adult tickers sold: ";
    cin >> adult_tickets;
    cout << "Please enter the amount of child tickets sold: ";
    cin >> child_tickets;

    //declarar las segundas variables
    double gross_profit;
    double net_profit;
    double amount_paid;

    //calcular las ganancias
    gross_profit = (adult_tickets*10.0)+(child_tickets * 6.0);
    net_profit = gross_profit*0.20;
    amount_paid = gross_profit*0.80;

    //sacar los resultados
    cout << "Movie Name: " << movie << endl;
    cout << "Adult Tickets Sold: " << adult_tickets << endl;
    cout << "Childrens Tickets Sold: " << child_tickets << endl;
    cout << "Gross Box Office Profit: " << setw(5) << "$ " << setprecision(2) << fixed << gross_profit << endl;
    cout << "Net Box Office Profit: " << setw(7) << "$ " << setprecision(2) << fixed << setw(7) << net_profit << endl;
    cout << "Amount Paid to Distributor: " << "$ " << setprecision(2) << fixed << amount_paid << endl;


    return 0;
}