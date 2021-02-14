/*
   File:      SelectionSort.h
   Authors:   Luke de Munk
   Class:     SelectionSort
   Version:   1.0

   SelectionSort feature to sort arrays.
*/
#ifndef SelectionSort_H
#define SelectionSort_H
#include "TestUtility.h"

class SelectionSort
{
  public:
    SelectionSort(bool debugMode = false) { _debugMode = debugMode; }

    /**************************************************************************/
    /*!
        @brief  Enables debug mode.
    */
    /**************************************************************************/
    void enableDebug() {
        _debugMode = true;
    }

    /**************************************************************************/
    /*!
        @brief  Disables debug mode.
    */
    /**************************************************************************/
    void disableDebug() {
        _debugMode = false;
    }

    /**************************************************************************/
    /*!
        @brief  Sorts a list of elements.
        @param  list    Array of elements to be sorted
        @param  n       Length of the array
    */
    /**************************************************************************/
    void sort(int32_t list[], uint32_t n) {
        /* If debug mode is on, print list */
        if (_debugMode)
            printList(list, n);

        uint32_t i, j, min_idx;
    
        /* One by one move boundary of unsorted subarray */
        for (i = 0; i < n-1; i++) {
            min_idx = i;

            /* Find the minimum element in unsorted array */
            for (j = i+1; j < n; j++) {
                if (list[j] < list[min_idx])
                    min_idx = j;
            }

            _swap(&list[min_idx], &list[i]);                                      //Swap the found minimum element with the first element  
        }  
    }  
    
  private:
    bool _debugMode;

    /**************************************************************************/
    /*!
        @brief  Swaps two values using their addresses.
        @param  a   First value
        @param  b   Second value
    */
    /**************************************************************************/
    void _swap(int32_t* a, int32_t* b) {
        int32_t t = *a;
        *a = *b;
        *b = t;
    }
};
#endif