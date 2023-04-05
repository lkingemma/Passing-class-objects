#include "GameStock.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Default constructor
GameStock::GameStock()
{
    name = "";
    type = "";
    price = 0.0;
    version = 0.0;
    numberOfGames = 0;
}
// Parameterized constructor
GameStock::GameStock(string n, string t, double p, double v, int number)
{
    name = n;
    type = t;
    price = p;
    version = v;
    numberOfGames = number;
}
// Getter functions
string GameStock::getName() const
{
    return name;
}

string GameStock::getType() const
{
    return type;
}

double GameStock::getPrice() const
{
    return price;
}

double GameStock::getVersion() const
{
    return version;
}

int GameStock::getNumberOfGames() const
{
    return numberOfGames;
}
// Setter functions
void GameStock::setName(string n)
{
    name = n;
}

void GameStock::setType(string t)
{
    type = t;
}

void GameStock::setPrice(double p)
{
    price = p;
}

void GameStock::setVersion(double v)
{
    version = v;
}

void GameStock::setNumberOfGames(int number)
{
    numberOfGames = number;
}
// Increase or decrease the number of games in stock
void GameStock::increaseNumGames(int number)
{
    numberOfGames += number;
}

void GameStock::decreaseNumGames(int number)
{
    numberOfGames -= number;
    if (numberOfGames < 0)
    {
        numberOfGames = 0;
    }
}
// Display the game stock details
void GameStock::display() const
{
    cout << setw(20) << left << "Name: " << name << endl;
    cout << setw(20) << left << "Type: " << type << endl;
    cout << setw(20) << left << "Price: " << fixed << setprecision(2) << "$" << price << endl;
    cout << setw(20) << left << "Version: " << fixed << setprecision(2) << version << endl;
    cout << setw(20) << left << "Number of games: " << numberOfGames << endl;
}
