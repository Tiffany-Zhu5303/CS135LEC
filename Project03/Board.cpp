#include "Board.hpp"

#include <iostream>
using namespace std;

//constructor
Board::Board(){
  max = 0;
  target = 32;

  numRows = 3;
  numCols = 3;

  panel = new int*[numRows];

  for(int i = 0; i < numRows; i++){
    panel[i] = new int[numCols];
  }
}

Board::Board(int m){
  max = 0;
  target = 32;
  
  if(m >= 1){
    numRows = m;
    numCols = m;
  }else{
    numRows = 3;
    numCols = 3;
  }

  panel = new int*[numRows];
  
  for(int i = 0; i < numRows; i++){
    panel[i] = new int[numCols];
  }
}

Board::Board(int m, int n){
  max = 0;
  target = 32;

  if(n >= 1 && m >= 1){
    numRows = m;
    numCols = n;
  }else{
    numRows = 3;
    numCols = 3;
  }

  panel = new int*[numRows];

  for(int i = 0; i < numRows; i++){
    panel[i] = new int[numCols];
  }
}

Board::~Board(){
  delete[] panel;
  panel = nullptr;
}

void Board::print() const{
  for(int i = 0; i < numRows; i++){
    cout << "+";
    for(int j = 0; j < numCols; j++){
      cout << "----+";
    }

    cout << "\n";

    for(int n = 0; n < numCols; n++){
      cout << "|    ";
    }

    cout << "|\n";
  }

  cout << "+";

  for(int i = 0; i < numCols; i++){
    cout << "----+";
  }

  cout << "\n";
}
