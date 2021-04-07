#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

// used for shoe the board
void Board::board_size_update(uint row, uint col, uint str_len)
{
    if (Board::min_row > row)
    {
        Board::min_row = row;
    }
    if (Board::max_row < row + str_len-1)
    {
        Board::max_row = row + str_len-1;
    }
    if (Board::min_col > col)
    {
        Board::min_col = col;
    }
    if (Board::max_col < col + str_len-1)
    {
        Board::max_col = col + str_len-1;
    }
}

void Board::post(uint row, uint col, Direction vector, const string &str)
{
    board_size_update(row, col, str.length());

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
    uint s = 0;
    while (s < len)
    {
        if (Board::theBoard[row][col] == 0)
        {
            str += '_';
        }
        else
        {
            str += Board::theBoard[row][col];
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
    for (uint row = min_row - 1; row < max_row; row++)
    {
        for (uint col = min_col - 1; col < max_col; col++)
        {
            if (Board::theBoard[row][col] == 0)
            {
                cout << '_';
            }
            else
            {
                cout << Board::theBoard[row][col];
            }
        }
        cout << endl;
    }
}

