#include <string>
#include "Direction.hpp"
#include <map>
#include <iostream>
#define bigest_int 4294967295
using namespace std;
namespace ariel
{
    class Board
    {

    private:
        map<const uint, map<const uint, char>> theBoard;
        uint min_row;
        uint min_col;
        uint max_row;
        uint max_col;

    public:
        Board(/* args */)
            : min_row(bigest_int), min_col(bigest_int), max_row(0), max_col(0)
        {
        }
        ~Board()
        {
        }
        void post(uint row, uint col, Direction vector, const string &str);
        string read(uint row, uint col, Direction vector, uint len);
        void show();
        void board_size_update( uint row,  uint col,  uint str_len,Direction vector);
    };
}
