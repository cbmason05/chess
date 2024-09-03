//pieces.h 
//declare pieces classes


class Queen
{
    public:
        Queen(int x, int y);
        void Move(int x, int y, char(* board)[10]);
        void Print(); 
        
    private:
        int x,y;

};

class Knight
{
    public:
        Knight(int x, int y);
        void Move(int x, int y, char (*board)[10]); 
        void Print(); 

    private:
        int x,y;

};

class Bishop
{
    public:
        Bishop(int x, int y);
        void Move(int x, int y, char (*board)[10]); 
        void Print(); 

    private:
        int x,y;

};

class Rook
{
    public:
        Rook(int x, int y);
        void Move(int x, int y, char (*board)[10]);
        void Print(); 

    private:
        int x,y;

};