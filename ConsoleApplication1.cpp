#include <iostream>
#include "clsLoginScreen.h"
#include "clsUser.h"
#include<string>
#include<cmath>
#include <cstdlib>
#include <ctime>    
#include<iomanip>
#include<cstdio>
#include<vector>
#include<fstream>
#include<cctype>
#include "clsCurrency.h"
static void _PrintCurrency(clsCurrency Currency)
{
    cout << "\nCurrency Card:\n";
    cout << "_____________________________\n";
    cout << "\nCountry    : " << Currency.Country();
    cout << "\nCode       : " << Currency.CurrencyCode();
    cout << "\nName       : " << Currency.CurrencyName();
    cout << "\nRate(1$) = : " << Currency.Rate();

    cout << "\n_____________________________\n";

}
int main()
{
    clsUtil::Srand();
    while (true)
    {
        if (!clsLoginScreen::ShowLoginScreen())
        {
            break;
        }
    }

    return 0;
}

