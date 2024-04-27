#include <iostream>
using namespace std;
class Hero
{

private:
    int health;

public:
    char level;
    void print()
    {
        cout << level << endl;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // creation of object
    Hero sayali;
    cout << "sayali health " << sayali.gethealth() << endl; // will give garbage value
    // sayali.health = 100; // not accessible as its on private
    sayali.sethealth(70);
    sayali.level = 'A';

    cout << "health is " << sayali.gethealth() << endl;
    cout << "level is " << sayali.level << endl;
}