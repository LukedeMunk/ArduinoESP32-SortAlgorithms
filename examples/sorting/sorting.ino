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

QuickSort qs(true);
MergeSort ms(true);
SelectionSort ss(true);
InsertionSort is(true);
BubbleSort bs(true);

/**************************************************************************/
/*!
  @brief    Setup board.
*/
/**************************************************************************/
void setup() {
  Serial.begin(9600);
  
  int32_t list[] = {2, 1, 3, 4, 6, 5, 8, 9, 0};

  Serial.print("Unsorted list: ");
  printList(list, 9);

  qs.sort(list, 9);
  ms.sort(list, 9);
  ss.sort(list, 9);
  is.sort(list, 9);
  bs.sort(list, 9);

  Serial.print("Sorted list: ");
  printList(list, 9);
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
