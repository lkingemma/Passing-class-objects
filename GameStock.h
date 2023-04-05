#ifndef GAMESTOCK_H
#define GAMESTOCK_H
#include <string>
using namespace std;

// Class definition for GameStock
class GameStock
{
// Private member variables
private:
    string name;
    string type;
    double price;
    double version;
    int numberOfGames;

public:
// Public member functions
    GameStock();
    GameStock(string n, string t, double p, double v, int number);

    string getName() const;
    string getType() const;
    double getPrice() const;
    double getVersion() const;
    int getNumberOfGames() const;

    void setName(string n);
    void setType(string t);
    void setPrice(double p);
    void setVersion(double v);
    void setNumberOfGames(int number);
    void increaseNumGames(int number); // increase numOfGames by number
    void decreaseNumGames(int number);// decrease numOfGames by number
    void display() const;
};

#endif // GAMESTOCK_H