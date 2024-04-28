#include <iostream>
using namespace std;
class Hero
{

private:
    int health;

public:
    char level;

    Hero() // default constructor
    {
        cout << "constructor called " << endl;
    }
    // parameterised constructor
    Hero(int health, char level)
    {    
        cout<<"copy constructor called "<<endl;
        this->health = health;
        this->level = level;
    }

    // copy construtor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "health " << this->health << endl;

        cout << "level " << this->level << endl;
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
    Hero shivani(100, 'A');
    shivani.print();

    Hero sayali(shivani);
    sayali.print();

    // obj created statically
    // Hero sayali(10); // constructor called
    // cout << "address of sayali " << &sayali << endl;
    // sayali.gethealth();

    // obj created dynamically
    // Hero *h = new Hero(1); // constructor called

    /*  //static allocation
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
      */
}