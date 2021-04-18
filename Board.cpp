#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

// used for show the board, detrmin the show size
void Board::board_size_update(uint row, uint col, uint str_len, Direction vector)
{
        Board::min_col = min(col,Board::min_col);
        Board::min_row = min(row,Board::min_row);
if( Direction::Horizontal==vector)
    {
        Board::max_col = max(col + str_len-1,Board::max_col);
        Board::max_row = max(row,Board::max_row);
    }
    else{
        Board::max_col = max(col,Board::max_col);   
        Board::max_row = max(row + str_len-1,Board::max_row);
    }
}
//post function
void Board::post(uint row, uint col, Direction vector, const string &str)
{
    board_size_update(row, col, str.length(),vector);

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
//read function
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
//show function
void Board::show()
{
    for (uint row = min_row - 1; row <= max_row+1; row++)
    {
        for (uint col = min_col - 1; col <= max_col+1; col++)
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

