#ifndef PAWN_H
#define PAWN_H


class Pawn
{
    public:
        Pawn();
        Pawn(int x,int y);
        virtual ~Pawn();
        Pawn(const Pawn& other);
        int moveto(int offset_x,int offset_y) ;
        int getX() const;
        int getY() const;


    protected:
        virtual bool moveAuthorisation(int offset_x,int offset_y);
        int pos_x;
        int pos_y;
    private:

};

#endif // PAWN_H
