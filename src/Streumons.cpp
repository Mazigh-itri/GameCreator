#include "Streumons.hpp"

Streumons::Streumons(int x, int y): Pawn(pos_x,pos_y)
{
    //ctor
}

Streumons::~Streumons()
{
    //dtor
}

Streumons::Streumons(const Streumons& other)
{
    //copy ctor
}

bool Streumons::moveAuthorisation(int offset_x,int offset_y){
    if(pos_x-offset_x>1||pos_x-offset_x<-1||pos_y-offset_y>1||pos_y-offset_y<-1)
        return false;
    return true;
}
