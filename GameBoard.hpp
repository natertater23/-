//
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>

#include "ExtendableVector.h"

const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:   
   enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };
   
   enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };
   
   // Build the gameboard
   // TO DO: implement this function
   void buildBoard();// will implement in .cpp i think 
      
      
      
   
   
   GameBoard() {
      buildBoard();//DONE
   }
   

   
   int checkChutesLadders(int position) {//DONE
      if ((position < 0) || (position >= BOARD_SIZE)) {
         throw range_error("index out of bounds");
      }
        switch(position){
      case ONE:
        return 38;
         break;
      case FOUR:
         return 14;
         break;
       case NINE:
         return 31;
         break;
       case TWENTY_ONE:
         return 42;
         break;
       case TWENTY_EIGHT:
        return 84;
         break;
      case THIRTY_SIX:
         return 44;
         break;
       case FIFTY_ONE:
         return 67;
         break;
       case SEVENTY_ONE:
         return 91;
         break;
      case EIGHTY:
        return 100;
         break;
      case SIXTEEN:
         return 6;
         break;
       case FORTY_SEVEN:
         return 26;
         break;
       case FORTY_NINE:
         return 11;
         break;
       case FIFTY_SIX:
        return 53;
         break;
      case SIXTY_TWO:
         return 19;
         break;
       case SIXTY_FOUR:
         return 60;
         break;
       case EIGHTY_SEVEN:
         return 24;
         break;
      case NINETY_THREE:
         return 73;
         break;
       case NINETY_FIVE:
         return 75;
         break;
       case NINETY_EIGHT:
         return 78;
         break;      
        }
   
      return position;
   }
   
   
private:
   // TO DO: add storage for squares including square of chutes and ladders
   // Requirement: use ExtendableVector to store the square
   //ExtendableVector<int> gameVector;//board ? 
   //for(int i = 0;i < 100 ; i++){
   ///gameVector.insert(0,i+1);
   //}//creates Vector with nums 1-100, representing the Gameboard ? do we need this ?
      
};
