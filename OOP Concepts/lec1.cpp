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
    
    
};
int main(){
    //creation of object
    Hero sayali;
    sayali.health=100; //not accessible as its on private 
    sayali.level='A';
}