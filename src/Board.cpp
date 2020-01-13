#include "Board.h"
#include <iostream>
#include <fstream>
#include <string.h>

Board::Board()
{
    //ctor
}
Board::Board(const char *path){
ifstream file(path);
if(file)
    {
        int COLUMNS,ROWS,LEVEL;
        char* word;
        while(file>>word)
        {
            if(word=="COLUMNS:"){
                file>>COLUMNS;
                this->columns=COLUMNS;
             }
            if(word=="ROWS:"){
                file>>ROWS;
                this->columns=ROWS;
            }
            if(word=="LEVEL:"){
                file>>LEVEL;
                this->level=LEVEL;
            }
            if(word=="PAWN:"){
                if(this->level>-1 && this->rows>-1  && this->columns>-1 )
                {
                    board= new Pawn* [this->rows];
                    for(int i=0;i<this->columns;i++)
                    {
                        board[i] =new Pawn[columns];
                        memset(board[i],' ', columns*sizeof(char));
                    }
                }
                for(int i=0;i<rows;i++)
                    for(int j=0;j<columns;j++){
                    char pawn;
                    file>>pawn;
                    switch(pawn){
                    case 'j':
                        this->board[i][j]=Oueurj(i,j);
                        this->board[i][j].setLabelOfPawn('j');
                        break;
                    case 's':
                        this->board[i][j]=Streumons(i,j);
                        this->board[i][j].setLabelOfPawn('s');
                        break;
                    case 'x':
                        this->board[i][j]=Reumus(i,j);
                        this->board[i][j].setLabelOfPawn('x');
                        break;
                    case '$':
                        this->board[i][j]=Diams(i,j);
                        this->board[i][j].setLabelOfPawn('$');
                        break;
                    default:
                        this->board[i][j]=Pawn(i,j);
                        this->board[i][j].setLabelOfPawn(' ');
                    }
                }
                break;
            }

        }
}
else{
        cout << "Error opening input file in :\n" << path <<  endl;
    }
}
Board::~Board()
{

}
int Board::getRows() const
{
return this->rows;
}
int Board::getColumns() const
{
return this->columns;
}
int Board::getLevel() const
{
return this->level;
}
int Board::getNbrOfDiams() const
{
return this->nbrOfDiams;
}
int Board::getNbrOfGeurChars() const
{
return this->nbrOfGeurChars;
}


/*Board::Board(const Board& other)
{
    return ;
}*/
bool Board::moveAuthorisation(const Pawn &pawn,int offset_x,int offset_y){
    return (pawn.getX()+offset_x<this->rows && pawn.getX()+offset_x>0 && pawn.getY()+offset_y<this->columns && pawn.getY()+offset_y>0);
}

int Board::moveto(Pawn &pawn,int offset_x,int offset_y){
    if(moveAuthorisation(pawn,offset_x,offset_y))
        return pawn.moveto(offset_x,offset_y);
    else
        return -1;
}
bool Board::operator<(const Board &other) const{
    return (this->level<other.level);
}

ostream &operator<<(ostream &o,const Board &b) {
 for (int r = 0; r < b.getRows(); ++r)
 {
    for (int c = 0; c < b.getColumns(); ++c)
    {
        cout << " ";
    }
    cout << endl;
 }
 return o<<"";
}
Pawn **Board::getBoard(){
    return this->board;
}
void Board::displayBoard(){
    cout << "Level: "<< this->getLevel() << endl;
    cout << "Diams: "<< endl;
    cout << "Teleporteurs: "<< endl;
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++){
           //switch(getBoard()[i][j]->getLabelOfPawn()){
               // case 'j':
               if (this->board[i][j].getLabelOfPawn()== ' '){
                    cout << this->board[i][j].getLabelOfPawn() << ' ';
               }
               else{
                    this->board[i][j].setLabelOfPawn(' ');
                    cout << this->board[i][j].getLabelOfPawn() << ' ';
               }

            }
            cout << endl;

        }


