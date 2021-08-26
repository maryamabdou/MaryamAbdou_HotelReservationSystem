#ifndef NEWRESERVATION_H
#define NEWRESERVATION_H
#include "Guest.h"

class NewReservation : public Guest
{
public:
    int rooms,roomsNo,nights;
    char str[100];
    char type[50]="monster";

public:
    NewReservation();
    void NewReserv();
};

#endif // NEWRESERVATION_H
