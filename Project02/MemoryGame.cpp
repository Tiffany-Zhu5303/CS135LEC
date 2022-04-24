#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
#include <vector>
#include <string>
using namespace std;

void swap(int* arr, int i, int j);
int* randomize(int numSlots); //function to randomize layout
void displaySeparateLine(int numSlots);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor, 
    //set numPairs = 3, numSlots = 2 * numPairs + 2,
    //put 3 pairs of randomly generated ints in [0, 1000)
    //randomly in numSlots blocks. 
    //Note that 2 added after 2 * numPairs means number of 
    //two extra blocks without actual data.
{
  srand(time(NULL)); //TODO: uncomment this line to see
        //different layouts of numbers in different runnings.
        //time(NULL) is the current running time.
        //use the current running time to grow random sequence
        //Since running time differs,
        //the random sequence looks different
        //at different running time.
  srand(1); //TODO: add this before submitting to gradescope,
        //or autograde script cannot handle random input.

    //TODO: your code here
    numPairs = 3; //do not write int numPairs = 3;
    numSlots = 8; //3 pairs residing in 8 spaces,
                   //there are two empty spaces
    //IMPORTANT:
    //generate three random ints in [0, 1000),
    //randomly set them in the layout of the spaces,
    //that is, set up values array.
    //string value[numSlots];
    values = new string[numSlots];
    //srand(time(0));

    for(int i = 0; i < numPairs; i++){
      *(values + i) = to_string(rand() % 1000);
    }

    int* perm = randomize(numSlots);

    string* finalArr = new string[numSlots];
    
    for(int i = 0; i < numSlots; i++){
      if(i >= numPairs * 2){
	finalArr[perm[i]] = "";
      }else{
	finalArr[perm[i]] = values[i/2];
      }
    }

    delete[] values;
    values = finalArr;

    delete[] perm;
    perm = nullptr;
}

//TODO: implement by students
MemoryGame::~MemoryGame()
{
    //When an object is no longer in need,
    //release dynamically allocated memory by 
    //data members of the current object.

  delete[] values;
}

//TODO: implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int *arr, int i, int j)
{
  int first = arr[i];
  int second = arr[j];

  arr[i] = second;
  arr[j] = first;

}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector 
//to array values
int* randomize(int size)
{
    //idea to randomize 0, 1, 2, 3, 4, 5,
    //generate a random int in [0, 6), say 3,
    //then move arr[3] to the end,
    //say, 0, 1, 2, 5, 4, 3

  int*permArr = new int[size];
  
  for(int i = 0; i < size; i++){
    permArr[i] = i;
    }
  
    //generate a random int in [0, 5), say 3 again,
    //then swap arr[3], which is 5 now, with arr[4], 
    //get 0, 1, 2, 4, 5, 3
  
  for(int i = size; i > 0; i--){
    int index = rand() % i;
    
    swap(permArr, index, i - 1);
  }
    //generate a random int in [0, 4), say 2,
    //swap arr[2] with the current arr[3]
    //get 0, 1, 4, 2, 5, 3
    //continue to randomize arr[0..2].
    //afterwards, continue to randomize arr[0..1].
  return permArr;
}

//Display -----+ for numSlots times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSlots is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSlots)
{
    for (int i = 0; i < numSlots; i++)
    {
        if (i == 0)
           cout << "+";
        cout << "-----+";
    }
    cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown)
{
  cout << " ";
  
  for(int i = 0; i < numSlots; i++){
    cout << setw(3) << i;
    cout << setw(3) << " ";
  }

  std::cout << "\n";
  displaySeparateLine(numSlots);  
  
  for(int i = 0; i < numSlots; i++){
    cout << "|";
    
    if(bShown[i] == true){
      cout << setw(5) << values[i];
    }else{
      cout << setw(5) << "";
    }
  }
  cout << "|";

  std::cout << "\n";
  displaySeparateLine(numSlots);

}

//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play()
{
  MemoryGame game;
  
  int pairsFound = 0;
  int numFlips = 0;
  bool* bShown = new bool[numSlots];
  int index;
  int first = -1;
  //bool round = true;

  for(int i = 0; i < numSlots; i++){
    bShown[i] = false;
  }

  game.display(bShown);

  while(pairsFound < numPairs){
    cout << "Pick a cell to flip: "; 
    cin >> index;

    while(bShown[index] == true || index >= numSlots || index < 0){
      if(bShown[index] == true){
	cout << "The cell indexed at " << index << " is shown.\nRe-enter an index: ";
      }else if(index >= numSlots || index < 0){
	cout << "index needs to be in range of [0, 7]\nPick a cell to flip: " << endl;
      }
 
      cin >> index;
    }

    numFlips++;

    if(numFlips % 2 != 0){
      bShown[index] = true;
      first = index;
    }else{
      if(values[index] == values[first] && values[index] != ""){
	pairsFound++;
	bShown[index] = true;
      }else{
	bShown[first] = false;
      }
    }

    game.display(bShown);
    
    /*if(round == true){
      game.display(bShown);

      cout << "Pick a cell to flip: " << endl;
      cin >> index;

      while(index >= numSlots || index < 0){
	cout << "index needs to be in range of [0, 7]\nPick a cell to flip: " << endl;
	cin >> index;
      }

      if(values[index] != ""){
	bShown[index] = true;
	first = index;
	round = false;
      }
      
    }else{
      game.display(bShown);

      cout << "Pick a cell to flip: " << endl;
      cin >> index;

      while(index >= numSlots || index < 0){
       cout << "index needs to be in range [0, 7]\nRe-enter an index: " << endl;
       cin >> index;
      }

      while(index == first){
       cout << "The cell at index " << index << " is shown.\nRe-enter an index: " << endl;
       cin >> index;
      }

      if(values[index] == values[first]){
	pairsFound += 1;
	bShown[index] = true;
      }else{
	for(int i = 0; i < numSlots; i++){
	  bShown[i] = false;
	  pairsFound = 0;
	}
	
      }

      round = true;
    }

    numFlips++;*/
  }

  cout << "Congratulations! Take " << numFlips << " steps to find all matched pairs." << endl;

  delete[] bShown;
      
}
