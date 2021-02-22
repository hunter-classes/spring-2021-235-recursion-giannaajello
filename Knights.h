#ifndef KNIGHTS_H
#define KNIGHTS_H

class Knights{
public:
  Knights(int theSize);
  void startBoard();
  void result();
  bool validProblem(int counter, int x, int y);
  bool isValidMove(int x, int y);
  void printResult();
private:
  int size = 5;
  int visited[0][0];
  int rowMoves[8] = {2,1,-1,-2,-2,-1,1,2};
  int colMoves[8] = {1,2,2,1,-1,-2,-2,-1};
};

#endif
