#include "Guest.h"
#include <iostream>

using namespace std;

Guest::Guest()
{

}
void Guest::setRooms(int r){
    rooms=r;
}
int Guest::getRooms(){
    return rooms;
}
