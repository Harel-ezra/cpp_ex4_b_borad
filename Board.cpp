#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

// used for shoe the board
void Board::board_size_update(unsigned int row, unsigned int col, unsigned int str_len)
{
    if (Board::min_row > row)
    {
        Board::min_row = row;
    }
    if (Board::max_row < row + str_len)
    {
        Board::max_row = row + str_len;
    }
    if (Board::min_col > col)
    {
        Board::min_col = col;
    }
    if (Board::max_col < col + str_len)
    {
        Board::max_col = col + str_len;
    }
}

void Board::post(unsigned int row, unsigned int col, Direction vector, const string &str)
{
    //board_size_update(row, col, str.length());

    uint s = 0;
    while (s < str.length())
    {
        Board::theBoard[row][col] = str[s];

        if (vector == Direction::Horizontal)
        {
            col++;
        }
        else
        {
            row++;
        }
        s++;
    }
}
string Board::read(uint row, uint col, Direction vector, uint len)
{
    string str;
    int s = 0;
    while (s < len)
    {
        if (Board::theBoard[row][col] == 0)
        {
            str+= '_';
        }
        else
        {
            str+= Board::theBoard[row][col];
        }
        if (vector == Direction::Horizontal)
        {
            col++;
        }
        else
        {
            row++;
        }
        s++;
    }
    return str;
}
void Board::show()
{
}

// int main()
// {
//     Board b;
//     b.post(1,1,Direction::Horizontal, "hey");
//     cout<<b.read(1,1,Direction::Horizontal,3);
//     cout<<" how"<<endl;
//     return 0;
// }
