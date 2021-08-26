#include "NewReservation.h"
#include <iostream>
#include <string.h>
using namespace std;

NewReservation::NewReservation()
{

}
void NewReservation::NewReserv()
{
    cout << "What is your class (Monster or Human)" << endl;
    cin >> str;
    cout << "How many number of rooms you want to reserve ?" << endl;
    cin >> roomsNo;
    Guest g;
    g.setRooms(g.getRooms()-roomsNo);
    cout << "How many number of nights you want to reserve ?" << endl;
    cin >> nights;
    if(strcmp(str,type)==0) //reservation for monster or human
        cout << nights*200;
    else
        cout << nights*500;
}

