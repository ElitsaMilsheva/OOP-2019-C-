#include <iostream>

using namespace std;
struct Destination
{
  char city[32];
  int kilometers;
};

int main()
{
     Destination d1 = {"Varna ", 200};
     Destination d2 = {"Sofia ", 400};
     cout<<d1.city<<d1.kilometers<<endl;
     cout<<d2.city<<d2.kilometers<<endl;

     Destination arr[30];
     for( int i = 0; i < 30; i++)
     {
         arr[i] = {};
     }
    return 0;
}

