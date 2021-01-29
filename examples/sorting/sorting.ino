/*
 * File:      sorting.ino
 * Author:    Luke de Munk
 * 
 * Example for the Sorting package.
 * For more info checkout: https://github.com/LukedeMunk/ArduinoESP32-SortAlgorithms
 */
#include "./lib/QuickSort.h"

QuickSort qs;

void displayList(int32_t list[], int32_t len);

/**************************************************************************/
/*!
  @brief    Setup board.
*/
/**************************************************************************/
void setup() {
  Serial.begin(9600);
  
  int32_t list[] = {2, 1, 3, 4, 6, 5, 8, 9, 0};

  Serial.print("Unsorted list: [");
  displayList(list, 9);

  qs.sort(list, 9);

  Serial.print("QuickSorted list: [");
  displayList(list, 9);
}

/**************************************************************************/
/*!
  @brief    Mainloop.
*/
/**************************************************************************/
void loop() {
  Serial.println("loop");
  delay(10000);
}

void displayList(int32_t list[], int32_t len) {
  for(int i = 0; i < len; i++) {
    Serial.print(list[i]);
    
    if (i == len-1) {
      Serial.println("]");
    } else {
      Serial.print(", ");
    }
  }
}
