#include "Pawn.h"

Pawn::Pawn()
{
    //ctor
}
Pawn::Pawn(int x ,int y): pos_x{x},pos_y{y}
{
    //ctor
}

Pawn::~Pawn()
{
    //dtor
}

Pawn::Pawn(const Pawn& other)
{
    //copy ctor
}
int Pawn::getX() const
{
    return this->pos_x;
}
int Pawn::getY() const
{
    return this->pos_y;
}
char Pawn::getLabelOfPawn(){
    return this->labelOfPawn;
}
void Pawn::setLabelOfPawn(char c){
    this->labelOfPawn=c;
}
int Pawn::moveto(int offset_x,int offset_y) {
    if(moveAuthorisation(offset_x,offset_y)){
        this->pos_x+=offset_x;
        this->pos_y+=offset_y;
        return 0;
    }

    else
       return -1;
}

bool Pawn::moveAuthorisation(int offset_x,int offset_y){
return false;
}
