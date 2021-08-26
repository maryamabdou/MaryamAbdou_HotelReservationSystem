#include "ExtraReservation.h"
#include <iostream>
#include <string.h>
using namespace std;

ExtraReservation::ExtraReservation()
{

}
void ExtraReservation::ExtraReserv(){
    cout << "What is your class (Monster or Human)" << endl;
    cin >> str;
    cout << "How many number of nights you want to reserve ?" << endl;
    cin >> nights;
    if(strcmp(str,type)==0) //reservation for monster or human
        cout << nights*200;
     else
        cout << nights*500;
}
