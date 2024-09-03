//driver.cpp
#include "pieces.h"
#include <iostream>
using namespace std;

void showBoard(char (*board)[10]){
    for (int j = 9; j >= 0; j--) {
        cout << "| ";
        for (int i = 0; i <= 9; i++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-----------------------------------------" << endl;
    }
}


int main(){

    //filling game board with empty spaces
    char board[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 9; j >= 0; j--) {
            board[i][j] = ' ';
        }
    }
    
    showBoard(board);

    cout << endl << endl; 

    //starting positions
    Queen Queen1(3,0);
    Queen1.Print();
    board[3][0] = 'Q';

    Knight Knight1(4,0);
    Knight1.Print();
    board[4][0] = 'K';


    Rook Rook1(5,0);
    Rook1.Print(); 
    board[5][0] = 'R';


    Bishop Bishop1(6,0);
    Bishop1.Print();
    board[6][0] = 'B';

    showBoard(board);


    cout << endl << endl; 


    int x,y;
   
    //move pieces
    bool quit = false;
    int choice;

    while (!quit){
    cout << "Move Knight: \n";
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout <<"Enter y-cooridnate: ";
    cin >> y;
    Knight1.Move(x,y,board);
    Knight1.Print();
    showBoard(board);


    cout << "Move Rook: \n";
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout <<"Enter y-cooridnate: ";
    cin >> y;
    Rook1.Move(x,y,board);
    Rook1.Print();
    showBoard(board);


    cout << "Move Bishop: \n";
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout <<"Enter y-cooridnate: ";
    cin >> y;
    Bishop1.Move(x,y,board);
    Bishop1.Print();
    showBoard(board);


    cout << "Move Queen: \n";
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout <<"Enter y-cooridnate: ";
    cin >> y;
    Queen1.Move(x,y, board);
    Queen1.Print();
    showBoard(board);

    cout << "Enter 1 to keep playing or 2 to quit. " << endl;
    cin >> choice;
    if (choice!=1)
        quit = true;
    }
}

