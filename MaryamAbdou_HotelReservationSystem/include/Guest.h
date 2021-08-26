#ifndef GUEST_H
#define GUEST_H


class Guest
{
private:
    int rooms=100;
protected:
    float NightCost;
    float CleaningCost;
    float SpaCost;

public:
    Guest();
    void setRooms(int r);
    int getRooms();

};

#endif // GUEST_H
