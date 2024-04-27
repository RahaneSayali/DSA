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
    //static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.gethealth() << endl;

    //dynamicallly
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).gethealth() << endl;


    cout << "level is  " << b->level << endl;
    cout << " health is " << b->gethealth() << endl;
    

    // // creation of object
    // Hero sayali;
    // cout<<"size of sayali is "<<sizeof(sayali)<<endl;
    // cout << "sayali health " << sayali.gethealth() << endl; // will give garbage value
    // // sayali.health = 100; // not accessible as its on private
    // sayali.sethealth(70);
    // sayali.level = 'A';

    // cout << "health is " << sayali.gethealth() << endl;
    // cout << "level is " << sayali.level << endl;
}