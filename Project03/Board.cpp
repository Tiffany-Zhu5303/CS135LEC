#include "Board.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomainip>
using namespace std;

//constructors
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
      if(panel[i][n] == 0){
	cout << "|    ";
      }else if(panel[i][n] < 10){
	cout << "|   " << panel[i][n];
      }else if(panel[i][n] > 9 && panel[i][n] < 100){
	cout << "|  " << panel[i][n];
      }else{
	cout << "| " << panel[i][n];
      }
    }
    cout << "|\n";  
  }

  cout << "+";

  for(int i = 0; i < numCols; i++){
    cout << "----+";
  }

  cout << "\n";
}

void Board::selectRandomCell(int& row, int&col){
  //step a
  int empty = 0;
  
  int singleRow, singleColumn;
  for(int i = 0; i < numRows; i++){
    for(int j = 0; j < numCols; j++){
      if(panel[i][j] == 0){
	empty++;
	singleRow = i;
	singleColumn = j;
      }
    }
  }

  //cout << "empty is " << empty << endl;//comment out later

  //step b
  if(noAdjacentSameValue() == true && max < target && empty == 0){
    cout << "Game over. Try again." << endl;
    exit(0);
  }

  //step c
  if(empty > 0){
    vector<int> *emptyCells = new vector<int>;
    //cout << empty << " and " << emptyCells -> size() << endl;
    //int count = 0; // comment out later

    for(int i = 0; i < numRows; i++){
      for(int j = 0; j < numCols; j++){
	if(panel[i][j] == 0){
	  emptyCells->push_back(i * numCols + j);
	  //cout << (i * col + j) << endl;
	  //count++; //comment out later
	}
      }
    }

    //step d
    int random = rand() % empty;
    random = emptyCells->at(random);
    int r = random / numCols;
    int c = random % numCols;
    //cout << emptyCells->size() << endl; //comment out later;
    //cout << random << endl; //comment out later;

    panel[r][c] = 1;
    // cout << r << " and " << c << endl; // comment out later
    //cout << "panel[r][c]: " << panel[r][c] << endl; //comment out later

    delete emptyCells;
    emptyCells = nullptr;
    //}
  }

  //step e
  print();

  //step f
  if(noAdjacentSameValue() == true && max < target){
    cout << "Game over. Try again." << endl;
    exit(0);
  }
    
}

	

bool Board::noAdjacentSameValue() const{
  for(int i = 0; i < numRows; i++){
    for(int j = 0; j < numCols - 1; j++){
      if(panel[i][j] == panel[i][j + 1]){
	return false;
      }
    }
  }

  for(int i = 0; i < numCols; i++){
    for(int j = 0; j < numRows - 1; j++){
      if(panel[j][i] == panel[j + 1][i]){
	return false;
      }
    }
  }

  return true;
  
}



void Board::pressUp(){
  for(int i = 0; i < numCols; i++){
    vector<int> nonZeros;
    
    for(int j = 0; j < numRows; j++){
      if(panel[j][i] != 0){
	    nonZeros.push_back(panel[j][i]);
      }
    }

    int index = 0;
    int row = 0;
    
    while(index < nonZeros.size()){
        if(index + 1 < nonZeros.size() && nonZeros.at(index) == nonZeros.at(index + 1)){
            panel[row][i] = nonZeros.at(index) * 2;
            
            index += 2;
            row++;
            
            if(panel[row][i] > max){
                max = panel[row][i];
            }
            
        }else{
            panel[row][i] = nonZeros.at(index);
            index++;
            row++;
        }
    }
    
    for(int j = row; j < numRows; j++){
        panel[row][i] = 0;
        row++;
    }
  }

  int row, col;
  selectRandomCell(row, col);
}

void Board::pressDown(){
for(int i = 0; i < numCols; i++){
    vector<int> *nonZeros = new vector<int>;
    
        for(int j = 0; j < numRows; j++){
             if(panel[j][i] != 0){
	            nonZeros->push_back(panel[j][i]);
      }
    }

    int index = nonZeros->size() - 1;
    int row = numRows - 1;
    
    while(index >= 0){
        if(index - 1 >= 0 && nonZeros->at(index) == nonZeros->at(index - 1)){
            panel[row][i] = nonZeros->at(index) * 2;
            
            index -= 2;
            row--;
            
            if(panel[row][i] > max){
                max = panel[row][i];
            }
            
        }else{
            panel[row][i] = nonZeros->at(index);
            index--;
            row--;
        }
    }
    
    for(int j = row; j >= 0; j--){
        panel[j][i] = 0;
    }
    
    delete nonZeros;
    nonZeros = nullptr;
  }

  int row, col;
  selectRandomCell(row, col);

}

void Board::pressLeft(){
for(int i = 0; i < numRows; i++){
    vector<int> *nonZeros = new vector<int>;
    
    for(int j = 0; j < numCols; j++){
      if(panel[i][j] != 0){
	    nonZeros->push_back(panel[i][j]);
      }
    }

    int index = 0;
    int col = 0;
    
    while(index < nonZeros->size()){
        if(index + 1 < nonZeros->size() && nonZeros->at(index) == nonZeros->at(index + 1)){
            panel[i][col] = nonZeros->at(index) * 2;
            
            index += 2;
            col++;
            
            if(panel[i][col] > max){
                max = panel[i][col];
            }
            
        }else{
            panel[i][col] = nonZeros->at(index);
            index++;
            col++;
        }
    }
    
    for(int j = col; j < numCols; j++){
        panel[i][col] = 0;
        col++;
    }
    
    delete nonZeros;
    nonZeros = nullptr;
  }

  int row, col;
  selectRandomCell(row, col);

}

void Board::pressRight(){
for(int i = 0; i < numRows; i++){
    vector<int> *nonZeros = new vector<int>;
    
        for(int j = 0; j < numCols; j++){
             if(panel[i][j] != 0){
	            nonZeros->push_back(panel[i][j]);
      }
    }

    int index = nonZeros->size() - 1;
    int col = numCols - 1;
    
    while(index >= 0){
        if(index - 1 >= 0 && nonZeros->at(index) == nonZeros->at(index - 1)){
            panel[i][col] = nonZeros->at(index) * 2;
            
            index -= 2;
            col--;
            
            if(panel[i][col] > max){
                max = panel[i][col];
            }
            
        }else{
            panel[i][col] = nonZeros->at(index);
            index--;
            col--;
        }
    }
    
    for(int j = col; j >= 0; j--){
        panel[i][col] = 0;
        col--;
    }
    
    delete nonZeros;
    nonZeros = nullptr;
  }

  int row, col;
  selectRandomCell(row, col);
}

void Board::start(){
  int round = 1;

  selectRandomCell(numRows, numCols);
  selectRandomCell(numRows, numCols);

  int ch;
  while(true){
    if(max >= target){
      cout << "Congratulations!" << endl;
      break;
    }

    char ch = getchar();
    if (ch == 'S'){
      break;
    }

    if (ch == '\033') { // if the first value is esc
      getchar(); // skip the [
      switch(getchar()) { // the real value
      case 'A':
 // code for arrow up
	cout << "Round " << setw(4) << round << ": ";
	cout << "Press UP. " << "Goal: " << target << endl;
	pressUp();
	round++;
	break;
      case 'B':
	cout << "Round " << setw(4) << round << ": ";
	cout << "Press DOWN. " << "Goal: " << target << endl;
	pressDown();
	round++;
// code for arrow down
	break;
      case 'C':
// code for arrow right
	cout << "Round " << setw(4) << round << ": ";
	cout << "Press RIGHT. " << "Goal: " << target << endl;
	pressRight();
	round++;
	break;
      case 'D':
// code for arrow left
	cout << "Round " << setw(4) << round << ": ";
	cout << "Press LEFT. " << "Goal: " << target << endl;
	pressLeft();
	round++;
    break;
      }
    }
  }
}
