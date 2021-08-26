#include <iostream>
using namespace std;
#include "Guest.h"
#include "Human.h"
#include "Monster.h"
#include "Account.h"
#include "NewReservation.h"
#include "ExtraReservation.h"

int main()
{
    int value,value2,value3;
    Account a;
    a.signing();
    cout << "1.New Reservation\n 2.Extend Reservation\n 3.Additional Services\n 4.Cancel Reservation " << endl;
    cin >> value;
    if(value == 1)
    {
        NewReservation n;
        n.NewReserv();
    }
    else if(value == 2)
    {
        ExtraReservation e;
        e.ExtraReserv();
    }
    else if(value == 3)
    {
        cout << "1.New Reservation\n 2.Extend Reservation" << endl;
        cin >> value2;
        if(value2 == 1)
        {
            NewReservation n;
            n.NewReserv();
        }
        else
        {
            ExtraReservation e;
            e.ExtraReserv();
        }
    }
    else{
        cout << "Do you want to cancel the reservation ?\n 1.Yes \t 2.No" << endl;
        cin >> value3;
        if(value3 == 1){ //decreasing number of rooms if the reservation is canceled
            Guest g;
            NewReservation n;
            g.setRooms(g.getRooms()+n.roomsNo);
        }
        else
            cout << "Exit!" << endl;
    }
    return 0;
}
