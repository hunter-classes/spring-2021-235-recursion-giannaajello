#include <iostream>
#include <array>
#include <climits>
#include "Knights.h"

Knights::Knights(int theSize)
{
  this->size = theSize;
  this->visited[0][0] = visited[theSize][theSize];
  this->startBoard();
}
void Knights::startBoard()
{
  for (int i = 0; i < size; i++)
  {
			for (int j = 0; j < size; j++)
      {
        this->visited[i][j] = 0;
      }
  }
}
void Knights::result()
{
    visited[0][0] = 0;
		// start knight's tour from top left corner square (0, 0)
		if(validProblem(1, 0, 0) == true)
    {
      printResult();
    }
}

bool Knights::validProblem(int counter, int x, int y)
{

    if (counter == (size * size))
    {
      return true;
		}
	   for (int i = 0; i < 8; i++)
    {
			int nextRow = x + rowMoves[i];
			int nextCol = y + colMoves[i];


			if (isValidMove(nextRow, nextCol) && visited[nextRow][nextCol] == 0)
      {

				visited[nextRow][nextCol] = counter;
				if (validProblem(counter + 1, nextRow, nextCol))
        {
          return true;
        }
	      visited[nextRow][nextCol] = 0;
			}
    }
	  return false;
}
bool Knights::isValidMove(int x, int y)
{
  if (x < 0 || x >= size || y < 0 || y >= size)
    {
			return false;
		}
    else
    {
			return true;
		}
}

void Knights::printResult()
{
  for (int i = 0; i < size; i++)
  {
			for (int j = 0; j < size; j++)
      {
				std::cout << visited[i][j] <<  ":";
			}
			std::cout << std::endl;
	}
}
