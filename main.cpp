// Emma King
// This program will demonstrate how to pass class objects to functions.
#include <iostream>
#include <iomanip>
#include <string>
#include "GameStock.h"

using namespace std;

// Function declarations
void getGameInfo(GameStock& game);
void addGames(GameStock& game);
void removeGames(GameStock& game);
void updateGamePrice(GameStock& game);
void display(const GameStock& game);
char menu();

int main()
{
    // Declare a GameStock object
    GameStock game;

    // Call getGameInfo so the user can enter the information about the game
   getGameInfo(game);

    char choice = 'X';  // you will need to initialize choice to something prior to while
    while (choice != 'Q')
    {
        choice = menu();
      
        if (choice == 'A')
        {
             addGames(game);
        }
        else if (choice == 'R')
        {
             removeGames(game);
        }
        else if (choice == 'U')
        {
             updateGamePrice(game);
        }
        else if (choice != 'Q')
        {
            cout << "Invalid menu choice" << endl;
        }
    }

    // Call the display function
    game.display();

    return 0;
}

// Function to get game information from user and create a GameStock object
void getGameInfo(GameStock& game)
{
    string name, type;
    double price, version;
    int numberOfGames;

    cout << "Enter the following information about the game:" << endl;

    cout << "Name: ";
    getline(cin, name); 
  
    cout << "Type: ";
    getline(cin, type);
  
    cout << "Price: ";
    cin >> price;
  
    cout << "Version: ";
    cin >> version;
  
    cout << "Number Of Games: ";
    cin >> numberOfGames;
  
  game = GameStock(name, type, price, version, numberOfGames);
  
}
void addGames(GameStock& game) {
    int numToAdd;

    cout << "Enter the number of games to add: ";
    cin >> numToAdd;
  
    game.increaseNumGames(numToAdd);
}

void removeGames(GameStock& game) {
    int numToRemove;

    cout << "Enter the number of games to remove: ";
    cin >> numToRemove;
  
    game.decreaseNumGames(numToRemove);
}

void updateGamePrice(GameStock& game) {
    double newPrice;

    cout << "Enter the new price for the game: $";
    cin >> newPrice;
   
    game.setPrice(newPrice);
}

char menu()
{
    char choice;
    cout << endl << "Menu choices : " << endl;
    cout << "A - Add to Stock" << endl;
    cout << "R - Remove from Stock" << endl;
    cout << "U - Update price" << endl;
    cout << "Q - Quit updating game information" << endl;
    cout << "Enter your menu choice : " << endl << endl;
    cin >> choice;
  
    choice = toupper(choice);

    return choice;
}
void display(const GameStock& game)
{
    // Output the game information with labels
    cout << left << setw(20) << "Name:" << game.getName() << endl;
    cout << left << setw(20) << "Type:" << game.getType() << endl;
    cout << left << setw(20) << "Price:" << fixed << setprecision(2) << game.getPrice() << endl;
    cout << left << setw(20) << "Version:" << game.getVersion() << endl;
    cout << left << setw(20) << "Number of Games:" << game.getNumberOfGames() << endl;
}