#include <iostream>
#include "Board.h"
#include <fstream>

using namespace std;

int main()
{
    string word="";
    const char* path = "/home/djamel/Documents/Master_1/LAO/Projet/GameCreator/fichier.board";
    Board bo(path);
    //bo.displayBoard();
//    if(bo){
//         while(bo. >> word){
//        cout << word << endl;
//        }
//    }
    cout << bo.getLevel()<< endl;



    return 0;
}
