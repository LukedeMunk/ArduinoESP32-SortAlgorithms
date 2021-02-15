/*
 * File:      sorting.ino
 * Author:    Luke de Munk
 * 
 * Example for the Sorting package.
 * For more info checkout: https://github.com/LukedeMunk/ArduinoESP32-SortAlgorithms
 */
#include "./lib/QuickSort.h"
#include "./lib/MergeSort.h"
#include "./lib/SelectionSort.h"
#include "./lib/InsertionSort.h"
#include "./lib/BubbleSort.h"
#include "./lib/TestUtility.h"

QuickSort qs;
MergeSort ms;
SelectionSort ss;
InsertionSort is;
BubbleSort bs;

/**************************************************************************/
/*!
  @brief    Setup board.
*/
/**************************************************************************/
void setup() {
  Serial.begin(9600);
  
  int32_t list[10];
  randomList(list, 10);
  Serial.print("Unsorted list: ");
  printList(list, 10);

  qs.sort(list, 10);
  shuffle(list, 10);
  printList(list, 10);
  
  ms.sort(list, 10);
  shuffle(list, 10);
  printList(list, 10);
  
  ss.sort(list, 10);
  shuffle(list, 10);
  printList(list, 10);
  
  is.sort(list, 10);
  shuffle(list, 10);
  printList(list, 10);
  
  bs.sort(list, 10);

  Serial.print("Sorted list: ");
  printList(list, 10);
}

/**************************************************************************/
/*!
  @brief    Mainloop.
*/
/**************************************************************************/
void loop() {
  //Serial.println("loop");
  delay(10000);
}
