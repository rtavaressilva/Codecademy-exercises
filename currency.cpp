//
// Created by Rafael Silva on 05/03/23.
//
#include <iostream>

double convertToUSDollars (double currency, double exchangeRate) {
double amountInDollars = currency * exchangeRate;
std::cout << "US Dollars = $ " << amountInDollars << std::endl;
return amountInDollars;
}

int main () {
double colombianPesos, brazilianReais, peruvianSoles, brazilianToDollar,
pesosToDollars, peruvianToDollar;
// On 6 march 2023 - pesos to USD: 0,00021; reais to USD: 0,19, soles to USD: 0,26
pesosToDollars = 0.00021;
brazilianToDollar = 0.19;
peruvianToDollar = 0.26;

    std::cout << "Enter a number os Colombian Pesos: " << std::endl;
    std::cin >> colombianPesos;
    convertToUSDollars(colombianPesos, pesosToDollars);
    std::cout << "Enter a number os Brazilian Reais: " << std::endl;
    std::cin >> brazilianReais;
    convertToUSDollars(brazilianReais, brazilianToDollar);
    std::cout << "Enter a number os Peruvian Soles: " << std::endl;
    std::cin >> peruvianSoles;
    convertToUSDollars(peruvianSoles, peruvianToDollar);


    return 0;
}