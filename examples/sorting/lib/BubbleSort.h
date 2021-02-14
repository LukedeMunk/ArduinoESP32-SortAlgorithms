/*
   File:      BubbleSort.h
   Authors:   Luke de Munk
   Class:     BubbleSort
   Version:   1.0

   BubbleSort feature to sort arrays.
*/
#ifndef BubbleSort_H
#define BubbleSort_H
#include "TestUtility.h"

class BubbleSort
{
  public:
    BubbleSort(bool debugMode = false) { _debugMode = debugMode; }

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
        for (uint32_t i = 0; i < n-1; i++) {
            /* Last i elements are already in place */
            for (uint32_t j = 0; j < n-i-1; j++) {
                if (list[j] > list[j+1])
                    _swap(&list[j], &list[j+1]);
                
                /* If debug mode is on, print list */
                if (_debugMode)
                    printList(list, n);
            }
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