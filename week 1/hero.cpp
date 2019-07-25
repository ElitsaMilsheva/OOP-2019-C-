#include <iostream>
#include <cstring>
using namespace std;
/* struct  Hero
 {
      char name[100];
      int health;
      unsigned int level;
      unsigned int experience;
      int strength;
      int speed;
      int intellect;

};
*/
class Hero
{
    char name[100];
    int health;
    unsigned int level;
    unsigned int experience;
    int strength;
    int speed;
    int intellect;

public:

    void init(char _name[], int _health, unsigned int _level, unsigned int _experience, int _strength, int _speed, int _intellect)
    {
        strcpy(name, _name);
        health = _health;
        level = _level;
        experience = _experience;
        strength = _strength;
        speed = _speed;
        intellect = _intellect;
    }
    void print()  const
    {
        cout << "Name " << name<< endl;
        cout << "Health" << health<< level* 10<<endl;
        cout << "Level" << level << endl;
        cout << "Experience" << experience<< level*100 << endl;
        cout <<"Strength" <<strength << endl;
        cout << "Speed" << speed <<endl;
        cout << "Intellect" << intellect <<endl;
    }
    void setname(char* _name)
    {
        strcpy(name, _name);
    }
    void sethealth (int _health)
    {
        health = _health;
    }
    void setlevel ( unsigned int _level)
    {
        level = _level;
    }
    void setexperience ( unsigned int _experience)
    {
        experience = _experience;
    }
    void setstrenght (int _strenght)
    {
        strength = _strenght;
    }
    void setintellect (int _intellect)
    {
        intellect = _intellect;
    }

    const  char* getName() const
    {
        return name;
    }
    int getintellect() const
    {
        return intellect;
    }
    unsigned int getLevel() const
    {
        return level;
    }
    unsigned int getexperience() const
    {
        return experience;
    }
    int gethealth() const
    {
        return health;
    }
    int getSpeed() const
    {
        return speed;
    }


};


int main()
{
    Hero h;
    h.init("Pixel", 10, 1, 0, 3, 2, 1);
    h.print();
    return 0;
    return 0;
}
