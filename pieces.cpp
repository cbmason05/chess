//pieces.cpp

#include <iostream> 
#include <iomanip>
#include "pieces.h"
#include <cstring>
using namespace std;


Queen::Queen(int x, int y)
{
    this->x = x;
    this->y = y;
 
};

void Queen::Print() {
    cout << "Queen - " << "(" << x << ", " << y << ")" << endl; 
}

void Queen::Move(int x, int y, char (*board)[10]){
    if ((x<0) || (x>9) || (y<0) || (y>9))
        cout << "Error: this move is invalid! (out of bounds) " << endl;
    else if (board[x][y] != ' ')
        cout << " Error: Spot is occupied by another piece. " << endl;
    else {
        board[this->x][this->y] = ' ';
        this -> x = x;
        this -> y = y;
        board[x][y] = 'Q';
    }
}


Rook::Rook(int x, int y)
{
    this->x = x;
    this->y = y;

}

void Rook::Print() {
    cout << "Rook - " << "(" << x << ", " << y << ")" << endl; 
}

void Rook::Move(int x, int y, char (*board)[10]){
    if ((x<0) || (x>9) || (y<0) || (y>9))
        cout << "Error: this move is invalid! (out of bounds) " << endl;
    else if (board[x][y] != ' ')
        cout << " Error: Spot is occupied by another piece. " << endl;
    else if (this->x == x) {
        board[this->x][this->y] = ' ';
        this -> x = x;
        this -> y = y;
        board[x][y] = 'R';
    }
     else if (this->y == y) {
        board[this->x][this->y] = ' ';
        this -> x = x;
        this -> y = y;
        board[x][y] = 'R';
    }
    else cout << " Error: Wrong movement. " << endl;
    
}


Knight::Knight(int x, int y)
{
    this->x = x;
    this->y = y;
 
}

void Knight::Print() {
    cout << "Knight - " << "(" << x << ", " << y << ")" << endl; 
}

void Knight::Move(int x, int y, char (*board)[10]){
    if ((x<0) || (x>9) || (y<0) || (y>9))
        cout << "Error: this move is invalid! (out of bounds) " << endl;
    else if (board[x][y] != ' ')
        cout << " Error: Spot is occupied by another piece. " << endl;
    else if ((x>this->x) && (y>this->y)){
        //going up 1 and right 2
        if ((x==(this->x+2)) && ((y==(this->y+1)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        //going up 2 and right 1
        else if ((x==(this->x+1)) && ((y==(this->y+2)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        else cout << " Error: Wrong movement. " << endl;
    }
     else if ((x<this->x) && (y>this->y)){
        //going up 1 and left 2
        if ((x==(this->x-2)) && ((y==(this->y+1)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        //going up 2 and left 1
        else if ((x==(this->x-1)) && ((y==(this->y+2)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        else cout << " Error: Wrong movement. " << endl;
     }
        else if ((x>this->x) && (y<this->y)){
        //going down 1 and right 2
        if ((x==(this->x+2)) && ((y==(this->y-1)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        //going down 2 and right 1
        else if ((x==(this->x+1)) && ((y==(this->y-2)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        else cout << " Error: Wrong movement. " << endl;
    }
     else if ((x<this->x) && (y<this->y)){
        //going down 1 and left 2
        if ((x==(this->x-2)) && ((y==(this->y-1)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        //going down 2 and left 1
        else if ((x==(this->x-1)) && ((y==(this->y-2)))){
            board[this->x][this->y] = ' ';
            this->x = x;
            this->y = y;
            board[x][y] = 'K';
        }
        else cout << " Error: Wrong movement. " << endl;
    }
    else {
        cout << "Error, Wrong movement! " << endl; 
    }
}


Bishop::Bishop(int x, int y)
{
    this->x = x;
    this->y = y;
 
};

void Bishop::Print() {
    cout << "Bishop -" << "(" << x << ", " << y << ")" << endl; 
}

void Bishop::Move(int x, int y, char (*board)[10]){
    if ((x<0) || (x>9) || (y<0) || (y>9))
        cout << "Error: this move is invalid! (out of bounds) " << endl;
    
    else if (board[x][y] != ' ')
        cout << " Error: Spot is occupied by another piece. " << endl;
    
    //going up and right diagonally
    else if ((x>this->x) && (y>this->y)){
        if ((x-this->x) == (y-this->y)){
            board[this->x][this->y] = ' ';
            this->x = (this->x) + (x - (this->x));
            this->y = (this->y) + (y - (this->y));
            board[x][y] = 'B';
        }
        else cout << " Error: Wrong movement. " << endl;
    }

    //going dowup and n right diagonally. 
     else if ((x<this->x) && (y>this->y)){
        if ((this->x-x) == (y-this->y)){
        board[this->x][this->y] = ' ';
        this->x = (this->x) + (x - (this->x));
        this->y = (this->y) + (y - (this->y));
        board[x][y] = 'B';
        }
        else  cout << " Error: Wrong movement. " << endl;
    }
    
    //going down and right diagonally
     else if ((x>this->x) && (y<this->y)){
        if ((x-this->x) == (this->y-y)){
        board[this->x][this->y] = ' ';
        this->x = (this->x) + (x - (this->x));
        this->y = (this->y) + (y - (this->y));
        board[x][y] = 'B';
        }
        else cout << " Error: Wrong movement. " << endl;
    }

    //going down and left diagonally
     else if ((x<this->x) && (y<this->y)){     
        if ((this->x-x) == (this->y-y)){ 
        board[this->x][this->y] = ' ';
        this->x = (this->x) + (x - (this->x));
        this->y = (this->y) + (y - (this->y));
        board[x][y] = 'B';
        }
        else cout << " Error: Wrong movement. " << endl;
    }

    

    else cout << " Error: Wrong movement. " << endl;
    
}


//testing brnahc merging, (this should start in "test-branch")